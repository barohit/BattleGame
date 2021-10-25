#include <stdio.h>
#include "gamemethods.h"

int main() {
    struct Fighter littleMac = createFighter("little mac", 1000, 100, 80, 40);
    printf("%d", littleMac.health);
}
