#include <stdio.h>
#include <string.h>

int main()
{
    char num[1010], zero = '0';
    int len, count[10] = {0};

    scanf("%s", num);
    len = strlen(num);
    for (int i = 0; i < len; i++) {
        count[num[i]-zero]++;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0)
            printf("%d:%d\n", i, count[i]);
    }

    return 0;
}

