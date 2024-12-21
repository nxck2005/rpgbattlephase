// Source file for player attributes and functions.
// Updated 21st December 2024; nxck2005

#include <iostream>
#include <random>

class Player {
    private:
        // Currently I don't see the need for any of these attributes being any other data type,
        // setting them to ints for now

        // Value for HP of the player
        int hp = 99;

        // Value for the ATK for the player. Used for determining attack strength
        int atk;

        // Value for the DEF for the player. Used for determining how much damage reduction is done towards the player.
        int def;

        // Value for LUCK for the player. Used for determining chance of critical hits.
        // Keep it below 100 so it can work with the battle function.
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

        // Set player's ATK
        void setAtk(int inAtk) {
            atk = inAtk;
        }

        // Get player's ATK
        int getAtk() {
            return atk;
        }

        // Increment ATK by given amount
        void incrementAtk(int inAtk) {
            atk += inAtk;
        }

        // Decrement ATK by given amount
        void decrementAtk(int inAtk) {
            atk -= inAtk;
        }

        // Set player's DEF
        void setDef(int inDef) {
            def = inDef;
        }

        // Get player's DEF
        int getDef() {
            return def;
        }

        // Increment DEF by given amount
        void incrementDef(int inDef) {
            def += inDef;
        }

        // Decrement DEF by given amount
        void decrementDef(int inDef) {
            def -= inDef;
        }

        // Set player's LUCK
        void setLuck(int inLuck) {
            luck = inLuck;
        }

        // Get player's LUCK
        int getLuck() {
            return luck;
        }

        // Increment LUCK by given amount
        void incrementLuck(int inLuck) {
            luck += inLuck;
        }

        // Decrement LUCK by given amount
        void decrementLuck(int inLuck) {
            luck -= inLuck;
        }

};