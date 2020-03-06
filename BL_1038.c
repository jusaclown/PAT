#include <stdio.h>

int main()
{
    int n, m, c, score[101] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &c);
        score[c]++;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &c);
        printf("%d", score[c]);
        if (i != m-1)
            printf(" ");
    }
    return 0;
}


