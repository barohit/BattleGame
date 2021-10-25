#include <stdio.h>
#include "gamemethods.h"

//will be updated
int main() {
    struct Fighter littleMac = createFighter("little mac", 1000, 100, 80, 40);
    printf("%d", littleMac.health);
}
