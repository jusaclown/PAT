#include <stdio.h>

int main()
{
    int max = 0, s[128] = {0};
    char c;

    while ((c = getchar()) != '\n') {
        s[c]++;
        if (s[c] > max)
            max = s[c];
    }

    for (int i = 0; i < max; i++) {
        if (s['P'] != 0) {
            putchar('P');
            s['P']--;
        }
        if (s['A'] != 0) {
            putchar('A');
            s['A']--;
        }
        if (s['T'] != 0) {
            putchar('T');
            s['T']--;
        }
        if (s['e'] != 0) {
            putchar('e');
            s['e']--;
        }
        if (s['s'] != 0) {
            putchar('s');
            s['s']--;
        }
        if (s['t'] != 0) {
            putchar('t');
            s['t']--;
        }
    }

    return 0;
}

/*仰望高端玩家*/

#include <stdio.h>

int main()
{
    char c, *str = "PATest";                /* use as index for count[] */
    int i, flag = 1, count[128] = {0};      /* for each ASCII char */

    /* Read and count numbers for every character */
    while((c = getchar()) != '\n')
        count[(int)c]++;

    /* Print any character in "PATest" if it is still left */
    while(flag)
        for(i = 0, flag = 0; i < 6; i++)
            if(count[(int)str[i]]-- > 0)    /* Check the number left */
                putchar(str[i]), flag = 1;

    return 0;
}

