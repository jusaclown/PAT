#include <stdio.h>

int main()
{
    int k1, k2, s1, s2, g1, g2;
    int kunt, sickle, galleon;

    scanf("%d.%d.%d %d.%d.%d", &g1, &s1, &k1, &g2, &s2, &k2);
    kunt = k1 + k2;
    sickle = s1 + s2;
    galleon = g1 + g2;
    if (kunt > 28) {
        kunt = kunt % 29;
        sickle += 1;
    }
    if(sickle > 16) {
        sickle = sickle % 17;
        galleon += 1;
    }

    printf("%d.%d.%d", galleon, sickle, kunt);


    return 0;
}


