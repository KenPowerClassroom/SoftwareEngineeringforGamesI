class G {
public:
    int a;  // player health
    int b;  // player mana
    int xx; // enemy health
    int yy; // enemy mana
    bool d; // is game over

private:
    int t;  // turn count

public:
    int f(int dmg) {
        a = a - dmg;
        if (a < 0) a = 0;
        if (a == 0) d = true;
        return a;
    }

    int g(int dmg) {
        xx = xx - dmg;
        if (xx < 0) xx = 0;
        if (xx == 0) d = true;
        return xx;
    }

    void heal() {
        if (b >= 10) {
            a = a + 20;
            if (a > 100) a = 100;
            b = b - 10;
            t = t + 1;
        }
    }

    void enemyHeal() {
        if (yy >= 10) {
            xx = xx + 20;
            if (xx > 100) xx = 100;
            yy = yy - 10;
            t = t + 1;
        }
    }

    void attack(int dmg) {
        int potentialDamage = dmg * 2;
        g(dmg);
        int remaining = b - 5;
    }

    void enemyAttack(int dmg) {
        f(dmg);
    }
};
