#include <stdio.h>
#include <math.h>
int main()
{
    int galleon, sickle, knut;
    long long money[3];

    for(int i = 0; i < 2; i++) {
        scanf("%d.%d.%d", &galleon, &sickle, &knut);
        money[i] = knut + (sickle + galleon * 17) * 29;
    }
    money[2] = money[1] - money[0];
    money[2] = (int)fabs(money[2]*1.0);

    galleon = money[2] / 493;
    money[2] = money[2] % 493;
    sickle = money[2] / 29;
    knut = money[2] % 29;
    if (money[0] > money[1])
        printf("-%d.%d.%d", galleon, sickle, knut);
    else
        printf("%d.%d.%d", galleon, sickle, knut);
    return 0;
}


