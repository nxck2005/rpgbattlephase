#include <iostream>
#include <random>
#include "player.cpp"
#include "enemy.cpp"

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
            // Set up random number generation
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> dis(1, 100); // RNG from 1 to 100

            // Battle loop: runs until either participant's HP drops to 0
            while (enemy->getHp() > 0 && player->getHp() > 0) {

                // Calculate dynamic critical hit threshold
                int critThreshold = 100 - std::min(player->getLuck(), 100); // Lower threshold for higher luck

                // Determine if the attack is critical
                // dis(gen) generates a random number using the rng generator above
                bool critFlag = dis(gen) > critThreshold;

            }
        }
};
