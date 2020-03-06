#include <stdio.h>
#include <string.h>

int main()
{
    char num[110], *dig[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int stack[110];
    int len, sum = 0, i = -1;

    scanf("%s", num);
    len = strlen(num);
    for (int i = 0; i < len; i++) {
        sum += (int)(num[i] - '0');
    }

    do {
        stack[++i] = sum % 10;
        sum /= 10;
    } while(sum != 0);

    while(i >= 0) {
        printf("%s", dig[stack[i--]]);
        if (i >= 0)
            printf(" ");
    }


    return 0;
}

