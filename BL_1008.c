#include <stdio.h>

int main()
{
    int n, m, i, k;
    int a[102];

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    m = m % n;

    for (i = n - m; i < n; ++i) {
        printf("%d", a[i]);
        ++k;
        if(k < n) printf(" ");
    }

    for (i = 0; i < n - m; ++i) {
        printf("%d", a[i]);
        ++k;
        if(k < n) printf(" ");
    }
    return 0;
}
