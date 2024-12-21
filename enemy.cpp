// Source file for enemy attributes and functions.
// Updated 21st December 2024; nxck2005

#include <iostream>
#include <random>

class Enemy {
    private:
        // Currently I don't see the need for any of these attributes being any other data type,
        // setting them to ints for now

        // Value for HP of the enemy
        int hp;

        // Value for the ATK for the enemy. Used for determining attack strength
        int atk;

        // Value for the DEF for the enemy. Used for determining how much damage reduction is done towards the enemy.
        int def;

        // Value for LUCK for the enemy. Used for determining chance of critical hits.
        int luck;
    public:
        // Set enemy's HP
        void setHp(int inHp) {
            hp = inHp;
        } 
        // Get enemy's HP
        int getHp() {
            return hp;
        }
        // Increment HP by given amount
        void incrementHp(int inHp) {
            hp += inHp;
        }
        // Decrement HP by given amount
        void decrementHp(int inHp) {
            hp -= inHp;
        }
};