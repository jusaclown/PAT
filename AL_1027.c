#include <stdio.h>

int main()
{
    int r, g, b;
    char ch[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                   '9', 'A', 'B', 'C'};

    scanf("%d %d %d", &r, &g, &b);
    printf("#");
    printf("%c%c", ch[r / 13], ch[r % 13]);
    printf("%c%c", ch[g / 13], ch[g % 13]);
    printf("%c%c", ch[b / 13], ch[b % 13]);

    return 0;
}

