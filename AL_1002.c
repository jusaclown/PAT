#include <stdio.h>
#define MAX 1010
#define LINE 2
int main()
{
    int i, j, k[LINE], n, count;
    double a;
    double poly[MAX] = {};
    i = count = 0;

    while (i < LINE) {
        scanf("%d", &k[i]);
        for (j = 0; j < k[i]; ++j) {
            scanf("%d %lf", &n, &a);
            poly[n] += a;
        }
        ++i;
    }

    for (i = 0; i < MAX; ++i) {
        if (poly[i] != 0) {
            ++count;
        }
    }

    printf("%d", count);
    for (i = MAX - 1; i >= 0; --i) {
        if (poly[i] != 0)
            printf(" %d %.1lf", i, poly[i]);
    }

    return 0;
}

