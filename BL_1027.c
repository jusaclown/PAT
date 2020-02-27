#include <stdio.h>
#include <math.h>

int main()
{
    int n, row;
    char c;

    scanf("%d %c", &n, &c);
    row = (int)sqrt((n + 1) / 2);
    for(int i = row; i > 0; i--) {
        for (int j = 0; j < row - i; j++)
            printf(" ");
        for (int j = 0; j < 2*i-1; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    for(int i = 2; i <= row; i++) {
        for (int j = 0; j < row - i; j++)
            printf(" ");
        for (int j = 0; j < 2*i-1; j++) {
            printf("%c", c);
        }
        printf("\n");
    }

    printf("%d", n+1-2*row*row);
    return 0;

}


