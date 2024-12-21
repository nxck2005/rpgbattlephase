// Source file for enemy attributes and functions.
// Updated 21st December 2024; nxck2005

#include <iostream>
#include <random>

class Enemy {
    private:
        // Currently I don't see the need for any of these attributes being any other data type,
        // setting them to ints for now

        // Value for Max HP for the enemy
        int maxHp = 99;

        // Value for HP of the enemy
        int hp = 99;

        // Value for the ATK for the enemy. Used for determining attack strength
        int atk;

        // Value for the DEF for the enemy. Used for determining how much damage reduction is done towards the enemy.
        int def;

        // Value for LUCK for the enemy. Used for determining chance of critical hits.
        // Keep it below 100 so it can work with the battle function.
        int luck;
    public:
        Enemy(int mHpIn, int HpIn, int atkIn, int defIn, int luckIn) {
            maxHp = mHpIn;
            hp = HpIn;
            atk = atkIn;
            def = defIn;
            luck = luckIn;
        }

        // Set enemy's max HP
        void setMaxHp(int inHp) {
            maxHp = inHp;
        }

        // Get enemy's max HP 
        int getMaxHp() {
            return maxHp;
        }

        // Increment enemy's max HP
        void incrementMaxHp(int inHp) {
            maxHp += inHp;
        }

        // Decrement enemy's max HP
        void decrementMaxHp(int inHp) {
            maxHp -= inHp;
        }

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

        // Set enemy's ATK
        void setAtk(int inAtk) {
            atk = inAtk;
        }

        // Get enemy's ATK
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

        // Set enemy's DEF
        void setDef(int inDef) {
            def = inDef;
        }

        // Get enemy's DEF
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

        // Set enemy's LUCK
        void setLuck(int inLuck) {
            luck = inLuck;
        }

        // Get enemy's LUCK
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