#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
    private:
        int maxHp;
        int hp;
        int atk;
        int def;
        int luck;
    public:
        Enemy(int mHpIn, int HpIn, int atkIn, int defIn, int luckIn);
        void setMaxHp(int inHp);
        int getMaxHp();
        void incrementMaxHp(int inHp);
        void decrementMaxHp(int inHp);
        void setHp(int inHp);
        int getHp();
        void incrementHp(int inHp);
        void decrementHp(int inHp);
        void setAtk(int inAtk);
        int getAtk();
        void incrementAtk(int inAtk);
        void decrementAtk(int inAtk);
        void setDef(int inDef);
        int getDef();
        void incrementDef(int inDef);
        void decrementDef(int inDef);
        void setLuck(int inLuck);
        int getLuck();
        void incrementLuck(int inLuck);
        void decrementLuck(int inLuck);
};

#endif