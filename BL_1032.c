#include <stdio.h>

int main(void)
{
    int i, n, id, max = 0;
    int sch_id, sch_score;
    int score[100001] = {0}; 	/*最后一组数据用了100000个学校，我佛了*/

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d %d", &sch_id, &sch_score);
        score[sch_id] += sch_score;
        if (score[sch_id] > max) {
            max = score[sch_id];
            id = sch_id;
        }
    }

    printf("%d %d", id, max);
    return 0;
}
