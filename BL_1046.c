#include <stdio.h>

int main()
{
    int n, i, sum, a_drink = 0, b_drink = 0;
    int a[100][4];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2],&a[i][3]);
        sum = a[i][0] + a[i][2];
        if (a[i][1] == sum && a[i][3] != sum)
            ++b_drink;
        else if (a[i][1] != sum && a[i][3] == sum)
            ++a_drink;
    }
    printf("%d %d", a_drink, b_drink);

    return 0;
}


