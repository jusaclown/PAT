#include <stdio.h>
#include <ctype.h>
#include <string.h>
//+ -> 43
int main()
{
    char c, str[100010];
    int s[128] = {0};

    while ((c = getchar()) != '\n') {
        s[c] = -1;
        if (c >= 'A' && c <= 'Z')
            s[tolower(c)] = -1;
    }

    if (s[43] == -1) {
        for (int i = 65; i < 91; i++)
            s[i] = -1;
    }

    while ((c = getchar()) != '\n') {
        if (s[c] != -1)
            putchar(c);
    }


    return 0;
}

