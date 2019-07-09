#include<stdio.h>

int main()
{
    int i = -1;
    char str[90][90];


    while (scanf("%s", str[++i]) != EOF);
    --i;
    while ( i != -1) {
        printf("%s", str[i--]);
        if (i > -1)
            printf(" ");
    }
    return 0;
}
