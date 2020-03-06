#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100], c;
    int s[128] = {0};
    int len;

    scanf("%s", str);
    len = strlen(str);
    getchar();
    while ((c = getchar()) != '\n')
        s[toupper(c)]++;

    for (int i = 0; i < len; i++) {
        c = toupper(str[i]);
        if (s[c] == 0) {
            putchar(c);
            s[c] = -1;
        }
    }

    return 0;
}



