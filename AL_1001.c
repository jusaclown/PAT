#include <stdio.h>

int main()
{
    int a, b, sum, d[10], i = 0;

    scanf("%d %d", &a, &b);
    sum = a + b;
    if (sum < 0) {
        printf("-");
        sum = -sum;
    }
    do {
        d[i++] = sum % 10;
        sum /= 10;
    } while (sum != 0);

    //--i;
    while(i > 0) {
        printf("%d", d[--i]);
        if (i % 3 == 0 && i > 0)
            printf(",");
    }

    return 0;
}

