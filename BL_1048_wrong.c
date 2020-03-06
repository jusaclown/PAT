/*你不说我怎么知道前面要加0 -.-*/
#include <stdio.h>
#include <string.h>

int main()
{
    char A[101], B[101];
    char encrypt[] = "0123456789JQK";

    scanf("%s %s", A, B);
    int lenA = strlen(A);
    int lenB = strlen(B);
    int maxlen = lenA > lenB ? lenA : lenB;
    int a, b;

    for(int i = 0; i < maxlen; i++)
    {
        a = lenA + i - maxlen < 0 ? 0 : A[lenA + i - maxlen] - '0';
        b = lenB + i - maxlen < 0 ? 0 : B[lenB + i - maxlen] - '0';

        if((maxlen - i) % 2)
            putchar(encrypt[(a + b) % 13]);
        else
            putchar('0' + (b - a < 0 ? b - a + 10 : b - a));
    }

    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str_a[110], str_b[110], ans[110] , ch[3] = {'J', 'Q', 'K'};
    int len, len_a, len_b, a, tmp;

    scanf("%s %s", str_a, str_b);
    len_a = strlen(str_a);
    len_b = strlen(str_b);

    len = len_a > len_b ? len_b : len_a;

    for (int i = 1; i < len+1; i++) {
        if (i % 2 != 0) {
            tmp = (int)(str_a[len_a - i] -'0' + str_b[len_b - i] -'0');
            tmp %= 13;
            if (tmp > 9) {
                ans[len_b - i] = ch[tmp - 10];
            } else {
                ans[len_b - i] = (char)tmp + '0';
            }
        } else {
            a = (int)str_b[len_b - i] - (int)str_a[len_a - i];
            if (a < 0) {
                a += 10;
                ans[len_b - i] = (char)a + '0';
            } else {
                ans[len_b - i] = (char)a + '0';
            }
        }
    }

    if (len_a > len_b) {
        for (int i = 0; i < len_a - len_b; i++)
            printf("0");
        for (int i = 0; i < len; i++)
            printf("%c", ans[i]);
    } else {
        for (int i = 0; i < len_b-len_a; i++) {
            printf("%c", str_b[i]);
        }
        for (int i = len_b-len_a; i < len_a; i++) {
            printf("%c", ans[i]);
        }
    }
    return 0;
}
*/
