// Source file for player attributes and functions.
// Updated 21st December 2024; nxck2005

#include <iostream>
#include <random>

class Player {
    private:
        // Currently I don't see the need for any of these attributes being any other data type,
        // setting them to ints for now

        // Value for HP of the player
        int hp;

        // Value for the ATK for the player. Used for determining attack strength
        int atk;

        // Value for the DEF for the player. Used for determining how much damage reduction is done towards the player.
        int def;

        // Value for LUCK for the player. Used for determining chance of critical hits.
        int luck;
    public:
        // Set player's HP
        void setHp(int inHp) {
            hp = inHp;
        } 
        // Get player's HP
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