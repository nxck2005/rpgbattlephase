// Source file for player attributes and functions.
// Updated 21st December 2024; nxck2005

#include "player.h"
#include <iostream>
#include <random>

// Constructor: Initialize Player stats using the parameters
Player::Player(int mHpIn, int HpIn, int atkIn, int defIn, int luckIn)
    : maxHp(mHpIn), hp(HpIn), atk(atkIn), def(defIn), luck(luckIn) {}

// Set player's max HP
void Player::setMaxHp(int inHp) {
    maxHp = inHp;
}

// Get player's max HP
int Player::getMaxHp() {
    return maxHp;
}

// Increment player's max HP
void Player::incrementMaxHp(int inHp) {
    maxHp += inHp;
}

// Decrement player's max HP
void Player::decrementMaxHp(int inHp) {
    maxHp -= inHp;
}

// Set player's HP
void Player::setHp(int inHp) {
    hp = inHp;
}

// Get player's HP
int Player::getHp() {
    return hp;
}

// Increment HP by given amount
void Player::incrementHp(int inHp) {
    hp += inHp;
}

// Decrement HP by given amount
void Player::decrementHp(int inHp) {
    hp -= inHp;
}

// Set player's ATK
void Player::setAtk(int inAtk) {
    atk = inAtk;
}

// Get player's ATK
int Player::getAtk() {
    return atk;
}

// Increment ATK by given amount
void Player::incrementAtk(int inAtk) {
    atk += inAtk;
}

// Decrement ATK by given amount
void Player::decrementAtk(int inAtk) {
    atk -= inAtk;
}

// Set player's DEF
void Player::setDef(int inDef) {
    def = inDef;
}

// Get player's DEF
int Player::getDef() {
    return def;
}

// Increment DEF by given amount
void Player::incrementDef(int inDef) {
    def += inDef;
}

// Decrement DEF by given amount
void Player::decrementDef(int inDef) {
    def -= inDef;
}

// Set player's LUCK
void Player::setLuck(int inLuck) {
    luck = inLuck;
}

// Get player's LUCK
int Player::getLuck() {
    return luck;
}

// Increment LUCK by given amount
void Player::incrementLuck(int inLuck) {
    luck += inLuck;
}

// Decrement LUCK by given amount
void Player::decrementLuck(int inLuck) {
    luck -= inLuck;
}
