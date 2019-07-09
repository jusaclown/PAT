#include <stdio.h>
#define MAX 110

int getp(char str[], char a)
{
    int i, num, p;
    char *c = str;
    i = num = p = 0;

    while (*c != '\0') {
        if (*c == a)
            ++num;
        ++c;
    }

    i = a - '0';
    while (num > 0) {
        p = p * 10 + i;
        --num;
    }

    return p;
}

int main()
{
    char a[MAX], b[MAX];
    char da, db;
    int  pa, pb;

    scanf("%s %c %s %c", a, &da, b, &db);
    pa = getp(a, da);
    pb = getp(b, db);
    printf("%d", pa + pb);

    return 0;
}

/* 这个效率要高一点啊
#include <stdio.h>

int main()
{
    long long a, b, da, db;
    long long pa = 0, pb = 0;
    scanf("%lld%lld%lld%lld", &a, &da, &b, &db);
    while (a != 0) {
        if (a % 10 == da)
            pa = pa * 10 + da;
        a = a / 10;
    }
    while (b != 0) {
        if (b % 10 == db)
            pb = pb * 10 + db;
        b = b / 10;
    }

    printf("%lld", pa + pb);
    return 0;
}

*/
