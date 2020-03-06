#include <stdio.h>
#include <ctype.h>

int main()
{
    char c, m;
    int max = 0;
    int s[128] = {0};

    while ((c = getchar()) != '\n') {
        if (c >= 'A' && c <= 'Z')
            s[tolower(c)]++;
        else if (c >= 'a' && c <= 'z')
            s[c]++;
    }

    for (int i = 'a'; i < 'z'; i++) 
        if (s[i] > max) {
            max = s[i];
            m = i;
        }

    printf("%c %d", m, max);

    return 0;
}
