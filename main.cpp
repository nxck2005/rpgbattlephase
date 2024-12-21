#include "player.cpp"
#include "enemy.cpp"
#include "battle.cpp"
#include <iostream>
using namespace std;

int main() {
    Enemy enemy(99, 99, 20, 10, 40);
    Player player(150, 150, 30, 20, 70);
    BattleInstance battle1(&player, &enemy);
    
    battle1.battle();
} 