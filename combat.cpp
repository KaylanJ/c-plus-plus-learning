#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::string;
using std::endl;
using std::max; // Added this to fix the Warrior class

class Character {
protected:
    string name;
    int health;
    int attack;
public:
    Character(string name, int health, int attack)
        : name(name), health(health), attack(attack) {}

    virtual void takeDamage(int damage) {
        health -= damage;
    }

    virtual int dealDamage() {
        return attack;
    }

    bool isAlive() { return health > 0; }
    string getName() { return name; }
    int getHealth() { return health; }
};

class Warrior : public Character {
    int armor;
public:
    Warrior(string name, int health, int attack, int armor)
        : Character(name, health, attack), armor(armor) {}

    void takeDamage(int damage) override {
        int reduced = max(0, damage - armor); // Now works with 'using std::max'
        health -= reduced;
        cout << name << "'s armor absorbs " << (damage - reduced) << " damage!\n";
    }
};

class Mage : public Character {
    int mana;
public:
    Mage(string name, int health, int attack, int mana)
        : Character(name, health, attack), mana(mana) {}

    int dealDamage() override {
        if (mana >= 10) {
            mana -= 10;
            cout << name << " casts a spell! (" << mana << " mana left)\n";
            return attack * 2;
        }
        cout << name << " is out of mana, uses basic attack.\n";
        return attack;
    }
};

void fight(Character* a, Character* b) {
    cout << "=== " << a->getName() << " vs " << b->getName() << " ===\n\n";

    int round = 1;
    while (a->isAlive() && b->isAlive()) {
        cout << "-- Round " << round++ << " --\n";

        // A attacks B
        int dmg = a->dealDamage();
        b->takeDamage(dmg);
        cout << a->getName() << " hits " << b->getName()
             << " for " << dmg << " damage! "
             << "(" << b->getHealth() << " hp left)\n";

        if (!b->isAlive()) break;

        // B attacks A
        dmg = b->dealDamage();
        a->takeDamage(dmg);
        cout << b->getName() << " hits " << a->getName()
             << " for " << dmg << " damage! "
             << "(" << a->getHealth() << " hp left)\n";

        cout << "\n";
    }

    string winner = a->isAlive() ? a->getName() : b->getName();
    cout << "\n=== " << winner << " wins! ===\n";
}

int main() {
    Warrior warrior("Brock", 120, 15, 5);  
    Mage    mage   ("Zara",   80, 12, 30); 

    fight(&warrior, &mage);
    return 0;
} 
