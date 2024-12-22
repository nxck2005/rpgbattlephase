#include <iostream>
#include <random>
#include "player.h"
#include "enemy.h"
using namespace std;

class BattleInstance {
    public:
        // Reference to player for changing stats during battle
        Player *player;

        // Reference to enemy for changing stats during battle
        Enemy *enemy;

        // Instantiate battle instance with references to player and enemy
        BattleInstance(Player *inPlayer, Enemy *inEnemy) {
            player = inPlayer;
            enemy = inEnemy;
        }

        // Start battle
        void battle() {

            // Flag for critical hits
            bool critFlag = false;
            bool enemyCritFlag = false;

            // Flag for victory
            bool victory = false;

            // For choices in attack
            int choice;

            // Set up random number generation
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> dis(1, 100); // RNG from 1 to 100

            // Calculate dynamic critical hit threshold
            int critThreshold = 100 - std::min(player->getLuck(), 100); // Lower threshold for higher luck
            int enemyCritThreshold = 100 - std::min(enemy->getLuck(), 100);

            // Flag for turns
            bool turnDone = false;

            // Battle loop: runs until either participant's HP drops to 0
            while (enemy->getHp() > 0 && player->getHp() > 0) {

                // Determine if the attack is critical
                // dis(gen) generates a random number using the rng generator above
                critFlag = dis(gen) > critThreshold;

                turnDone = false;

                cout << "Your health: " << player->getHp() << "/" << player->getMaxHp() << endl;
                cout << "Enemy's health: " << enemy->getHp() << "/" << enemy->getMaxHp() << endl;

                // Player's turn
                if (!turnDone) {
                    cout << "Your turn! Attack, or heal? (1 or 2)" << endl;
                    cin >> choice;

                    // If choice is to attack
                    if (choice == 1) {
                        // Define base attack stat to just be the given one
                        // If crit is true, multiply it by 3 times
                        // If not, do nothing
                        // Add luck to both, and decrement enemy's defense divided by 10.
                        int baseAtk = player->getAtk();
                        int finalAtk;
                        if (critFlag) {
                            finalAtk = (baseAtk * 3 + player->getLuck()) / enemy->getDef();
                        } else {
                            finalAtk = (baseAtk + player->getLuck()) / enemy->getDef();
                        }

                        // Decrement enemy's health by final attack stat
                        enemy->decrementHp(finalAtk);
                        
                        cout << "Did " << finalAtk << " damage to enemy!" << endl;

                        // If enemy is already dead after this, prematurely exit from the battle
                        if (enemy->getHp() <= 0) {
                            victory = true;
                            break;
                        }
                        turnDone = true;

                    } else if (choice == 2) {
                        // Choose a predecided heal amount.
                        int healAmt = 50;
                        
                        // If luck is greater than a critical value, add an arbitrary amt to healing
                        int bonusHeal = 10;
                        int greaterHealThreshold = 80;
                        if (player->getLuck() > greaterHealThreshold) {
                            healAmt += bonusHeal;
                        }

                        // Add heal amount to player.
                        player->incrementHp(healAmt);
                        cout << "Healed for " << healAmt << "!" << endl;

                        // If the HP went over max HP, set it to Max HP
                        if (player->getHp() > player->getMaxHp()) {
                            player->setHp(player->getMaxHp());
                        }
                        turnDone = true;
                    } else {
                        cout << "You missed! (wrong input..)" << endl;
                        turnDone = true;
                    }
                }

                // Enemy's attack phase

                // Generate enemy's crit chance
                enemyCritFlag = dis(gen) > enemyCritThreshold;
                
                // Enemy attack logic
                int enemyBaseAtk = enemy->getAtk();
                int enemyFinalAtk;
                if (enemyCritFlag) {
                    enemyFinalAtk = (enemyBaseAtk * 3 + enemy->getLuck()) / player->getDef();
                } else {
                    enemyFinalAtk = (enemyBaseAtk + enemy->getLuck()) / player->getDef();
                }

                player->decrementHp(enemyFinalAtk);
                cout << "Enemy did " << enemyFinalAtk << " damage!" << endl;
                
                // If player dies, :(
                if (player->getHp() <= 0) {
                    victory = false;
                    break;
                }
            }

            // Print victory or defeat message
            if (victory) {
                cout << "Victory!" << endl;
            } else {
                cout << "Defeat :(" << endl;
            }
            return;
        }
};
