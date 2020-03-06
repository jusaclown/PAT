#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    int s[128] = {0};
    int len1 = 0, len2 = 0, less = 0;

    while ((c = getchar()) != '\n') {
        len1++;
        s[c]++;
    }
    while ((c = getchar()) != '\n') {
        len2++;
        s[c]--;
        if (s[c] < 0)
            less--;
    }

    if (less < 0)
        printf("No %d", -less);
    else
        printf("Yes %d", len1 - len2);


    return 0;
}

