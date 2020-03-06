#include <stdio.h>

int main()
{
    int num, b, s;

    scanf("%d", &num);
    if (num > 99) {
        b = num / 100;
        num %= 100;
        for (int i = 0; i < b; i++)
            printf("B");
    }
    if (num > 9) {
        s = num / 10;
        num %= 10;
        for (int i = 0; i < s; i++)
            printf("S");
    }
    for (int i = 1; i <= num; i++)
        printf("%d", i);

    return 0;
}
