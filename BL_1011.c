#include <stdio.h>

int main()
{
    int n, i, j;
    long long int a[10][3];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%lld %lld %lld", &a[i][0], &a[i][1], &a[i][2]);
    }
    for (j = 0; j < n; ++j) {
        if ((a[j][0] + a[j][1]) > a[j][2])
            printf("Case #%d: true\n", j + 1);
        else
            printf("Case #%d: false\n", j + 1);
    }
    return 0;
}

/*
#include <stdio.h>

int main()
{
    int n, i = 1;
    long long int a, b, c;
    scanf("%d", &n);
    while (n--) {
        scanf("%lld %lld %lld", &a, &b, &c);
        if ((a + b) > c)
            printf("Case #%d: true\n", i++);
        else
            printf("Case #%d: false\n", i++); 
    }
    return 0;
}
*/
