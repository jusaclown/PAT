#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char id[15];			/* 学号*/
    int location_number;		/* 考场号 */
    int score;				/* 分数 */
    int local_rank;			/* 考场内排名 */
}stu[30010];

/* 按分数降序排序，如果分数相同，则按学号升序排序 */
int cmp(const void *stu1, const void *stu2)
{
    const struct student *a = stu1;
    const struct student *b = stu2;
    if (a->score != b->score)
        return b->score - a->score;
    else
        return strcmp(a->id, b->id);
}

int main()
{
    int n, i, j, k, r = 1, num = 0;	/* num为总考生数 r为总排名 k为考场内排名 */

    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
	/* 输入某个考场的考生信息 */
        scanf("%d", &k);
        for (j = 0; j < k; ++j) {
            scanf("%s %d", stu[num].id, &stu[num].score);
            stu[num].location_number = i;
            ++num;
        }
        qsort(stu + num - k, k, sizeof(stu[0]), cmp);
	/* 将该考场的第一名的考场内排名设为1，随后计算其余学生的考场内排名，
	 * 如果分数和前一位学生的分数相同，则他们的考场内排名也相同，若不同
	 * 则将他的排名设为他前面的人数 + 1 */
        stu[num - k].local_rank = 1;
        for (j = num - k + 1; j < num; ++j) {
            if (stu[j].score == stu[j - 1].score)
                stu[j].local_rank = stu[j - 1].local_rank;
            else
                stu[j].local_rank = j + 1 - (num - k);
        }
    }

    printf("%d\n", num);
    qsort(stu, num, sizeof(stu[0]), cmp);
    /* 计算总排名 */
    for (i = 0; i < num; ++i) {
        if (i > 0 && stu[i].score != stu[i -1].score)
            r = i + 1;
        printf("%s ",stu[i].id);
        printf("%d %d %d\n", r, stu[i].location_number, stu[i].local_rank);
    }

    return 0;
}
