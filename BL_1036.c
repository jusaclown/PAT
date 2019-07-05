#include<stdio.h>

int main()
{
    int i, j, k;
    int col, row;
    char c;

    scanf("%d %c", &col, &c);

    if (col % 2 == 0)
        row = col / 2;
    else
        row = col /2 + 1;

    for (i = 0; i < row; ++i) {
        if (i == 0 || i == row - 1) {
            for (j = 0; j < col; ++j)
                putchar(c);
            putchar('\n');
        }

        else {
            putchar(c);
            for (k = 0; k < col - 2; ++k)
                putchar(' ');
            putchar(c);
            putchar('\n');
        }
    }

    return 0;
}
