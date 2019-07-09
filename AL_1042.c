#include <stdio.h>
const int N = 54;

int main()
{
    int k;
    char mp[5] = {'S', 'H', 'C', 'D', 'J'};
    int start[N + 1], end[N + 1], next[N + 1];

    scanf("%d", &k);
    for (int i = 1; i <= N; ++i)
        start[i] = i;			/*初始化牌编号*/
    for  (int i = 1; i <= N; ++i)
        scanf("%d", &next[i]);		/*输入每个位置上的牌在操作后的位置*/

    for (int i = 0; i < k; ++i) {
        for (int j = 1; j <= N; ++j)
            end[next[j]] = start[j];
        for (int j = 1; j <= N; ++j)
            start[j] = end[j];
    }

    /* mp[(start[i] - 1) / 13]为这张牌对应的花色
     * (start[i] - 1) % 13 + 1为它所属花色下的编号*/
    for (int i = 1; i <= N; ++i) {
        printf("%c%d", mp[(start[i] - 1) / 13], (start[i] - 1) % 13 + 1);
        if (i != N)
            printf(" ");
    }
    return 0;
}
