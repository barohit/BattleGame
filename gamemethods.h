#include <stdlib.h>
#include <string.h>

struct Fighter {
    char name[1000];    
    int health;
    int attack;
    int defense;
    int speed;
};

void playRound(struct Fighter *fasterFighter, struct Fighter *slowerFighter) {
    int damage = fasterFighter -> attack - slowerFighter -> defense;
    slowerFighter -> health -= damage;
    damage = slowerFighter -> attack - fasterFighter -> defense;
    fasterFighter -> health -= damage;
};

struct Fighter determineFirstAttacker (struct Fighter *firstFighter, struct Fighter *secondFighter) {
    if (firstFighter -> speed > secondFighter -> speed) {
        return *firstFighter;
    } else if (secondFighter -> speed > firstFighter -> speed) {
        return *secondFighter;
    } else {
        int coin = rand();
        if (coin % 2 == 0) {
            return *firstFighter;
        } else {
            return *secondFighter;
        }
    }    
};

struct Fighter createFighter (char name[1000], int health, int attack, int defense, int speed) {
    struct Fighter fighter;
    strcpy(fighter.name, name);
    fighter.health = health; 
    fighter.attack = attack; 
    fighter.defense = defense; 
    fighter.speed = speed; 
    return fighter; 
}

