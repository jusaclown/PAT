#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, de, cai;
    int rank, score;
}stu[100010];

int cmp(const void *stu1, const void *stu2)
{
    const struct student *a = stu1;
    const struct student *b = stu2;
    if (a->rank != b->rank)        /*如果等级不同则等级小的在前*/
        return a->rank - b->rank;
    else if (a->score != b->score)    /*如果总分不同则分高的在前*/
        return b->score - a->score;
    else if (a->de != b->de) 
        return b->de - a->de; /*如果德分不同则分高的在前*/
    else
        return a->id - b->id; /*如果前面都一样则按准考证升序*/
            
}

int main()
{
    int n, low, high, count = 0;

    scanf("%d %d %d", &n, &low, &high);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &stu[i].id, &stu[i].de, &stu[i].cai);
        stu[i].score = stu[i].de + stu[i].cai;
        if (stu[i].de >= high && stu[i].cai >= high) {
            stu[i].rank = 1;
        } else if (stu[i].de >= high && stu[i].cai >= low)  {
            stu[i].rank = 2;
        } else if (stu[i].de >= stu[i].cai && stu[i].cai >= low) {
            stu[i].rank = 3;
        } else if (stu[i].de >= low && stu[i].cai >= low) {
            stu[i].rank = 4;
        } else {
            stu[i].rank = 5;
            count++;
        }
    }
    qsort(stu, n, sizeof(stu[0]), cmp);
    printf("%d\n", n - count);
    for (int i = 0; i < n - count; i++) {
        printf("%d %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
    }
    return 0;
}


