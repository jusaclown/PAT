#include <stdio.h>
#define N  100010
#define M  10010

int main()
{
    int n, m, i, a, b, d1, d2, temp, temp_dist;
    int dist_sum[M] = {0};
    int dist[N];

    /* 在开始就计算出从1到各个节点的距离，否则当N和M取到最大时会超时 */
    scanf("%d ", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &dist[i]);
        dist_sum[0] += dist[i];
        dist_sum[i] = dist_sum[0];
    }
    scanf("%d ", &m);
    for (i = 1; i <= m; ++i) {
        scanf("%d %d", &a, &b);
        if (a > b) {			
            temp = a;
            a = b;
            b = temp;
        }
        if (a == 1) {
            d1 = dist_sum[b - 1];
            d2 = dist_sum[0] - d1;
            temp_dist = (d1 > d2) ? d2 : d1;
        }

        else {
            d1 = dist_sum[b - 1] - dist_sum[a - 1];
            d2 = dist_sum[0] - d1;
            temp_dist = (d1 > d2) ? d2 : d1;
        }
        printf("%d\n", temp_dist);
    }

    return 0;
}
