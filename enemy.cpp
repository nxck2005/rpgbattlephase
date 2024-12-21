// Source file for enemy attributes and functions.
// Updated 21st December 2024; nxck2005

#include "enemy.h"
#include <iostream>
#include <random>

// Constructor: Initialize Enemy stats using the parameters
Enemy::Enemy(int mHpIn, int HpIn, int atkIn, int defIn, int luckIn)
    : maxHp(mHpIn), hp(HpIn), atk(atkIn), def(defIn), luck(luckIn) {}

// Set enemy's max HP
void Enemy::setMaxHp(int inHp) {
    maxHp = inHp;
}

// Get enemy's max HP
int Enemy::getMaxHp() {
    return maxHp;
}

// Increment enemy's max HP
void Enemy::incrementMaxHp(int inHp) {
    maxHp += inHp;
}

// Decrement enemy's max HP
void Enemy::decrementMaxHp(int inHp) {
    maxHp -= inHp;
}

// Set enemy's HP
void Enemy::setHp(int inHp) {
    hp = inHp;
}

// Get enemy's HP
int Enemy::getHp() {
    return hp;
}

// Increment HP by given amount
void Enemy::incrementHp(int inHp) {
    hp += inHp;
}

// Decrement HP by given amount
void Enemy::decrementHp(int inHp) {
    hp -= inHp;
}

// Set enemy's ATK
void Enemy::setAtk(int inAtk) {
    atk = inAtk;
}

// Get enemy's ATK
int Enemy::getAtk() {
    return atk;
}

// Increment ATK by given amount
void Enemy::incrementAtk(int inAtk) {
    atk += inAtk;
}

// Decrement ATK by given amount
void Enemy::decrementAtk(int inAtk) {
    atk -= inAtk;
}

// Set enemy's DEF
void Enemy::setDef(int inDef) {
    def = inDef;
}

// Get enemy's DEF
int Enemy::getDef() {
    return def;
}

// Increment DEF by given amount
void Enemy::incrementDef(int inDef) {
    def += inDef;
}

// Decrement DEF by given amount
void Enemy::decrementDef(int inDef) {
    def -= inDef;
}

// Set enemy's LUCK
void Enemy::setLuck(int inLuck) {
    luck = inLuck;
}

// Get enemy's LUCK
int Enemy::getLuck() {
    return luck;
}

// Increment LUCK by given amount
void Enemy::incrementLuck(int inLuck) {
    luck += inLuck;
}

// Decrement LUCK by given amount
void Enemy::decrementLuck(int inLuck) {
    luck -= inLuck;
}
