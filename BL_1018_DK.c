#include <stdio.h>

int change(char c)
{
    if (c == 'B')   return 0;
    if (c == 'C')   return 1;
    if (c == 'J')   return 2;
}

int main()
{
    char mp[3] = {'B', 'C', 'J'};
    char c1, c2;
    int n, k1, k2, id1 = 0, id2 = 0;
    int times[3] = {0};                     /* 分别记录胜 负 平次数*/
    int hand_a[3] ={0}, hand_b[3] = {0};    /* 按照BCJ顺序分别记录a, b三种手势获胜次数*/

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        getchar();
        scanf("%c %c", &c1, &c2);
        k1 = change(c1);
        k2 = change(c2);
        if ((k1 + 1) % 3 == k2) {           /* 甲赢 */
            ++times[0];
            ++hand_a[k1];
        } else if (k1 == k2) {              /* 平局 */
            ++times[1];
        } else {                            /* 乙赢 */
            ++times[2];
            ++hand_b[k2];
        }
    }

    printf("%d %d %d\n", times[0], times[1], times[2]);
    printf("%d %d %d\n", times[2], times[1], times[0]);

    for (int i = 1; i < 3; ++i) {           /* 找出a,b获胜次数最多的手势 */
        if (hand_a[i] > hand_a[id1]) id1 = i;
        if (hand_b[i] > hand_b[id2]) id2 = i;
    }
    printf("%c %c\n", mp[id1], mp[id2]);    /* 转变回BCJ */
    return 0;
}





