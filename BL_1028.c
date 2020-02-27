#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 0;
    char cur[17], eldest[17] = {'9'}, youngest[17] = {'0'};

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s %s", cur + 11, cur);
        if (strcmp(cur, "1814/09/06") >= 0 && strcmp(cur, "2014/09/06") <= 0) {
            if (strcmp(cur, eldest) <= 0)
                memcpy(eldest, cur, 17);
            if (strcmp(cur, youngest) >= 0)
                memcpy(youngest, cur, 17);
            ++count;
        }
    }

    if (count)
        printf("%d %s %s", count, eldest + 11, youngest + 11);
    else
        printf("0");

    return 0;
}




/* 这个代码只是部分正确，调试时发现好像是因为09 ！= 9 会返回true
#include <stdio.h>
#include <stdbool.h>

typedef struct person person;
struct person {
    char name[6];
    int yy, mm, dd;
}temp, left, right, max, min;

bool less_or_equ(person a, person b) /*如果a的日期小于等于b，返回true/
{
    if(a.yy != b.yy) return a.yy <= b.yy;
    else if(a.mm != b.mm) return a.mm <= b.mm;
    else return a.dd <= b.dd;
}

bool more_or_equ(person a, person b) /*如果a的日期大于等于b，返回true/
{
    if(a.yy != b.yy) return a.yy >= b.yy;
    else if(a.mm != b.mm) return a.mm >= b.mm;
    else return a.dd >= b.dd;
}

void init()
{
    min.yy = left.yy = 1814;
    max.yy = right.yy = 2014;
    min.mm = max.mm = left.mm = right.mm = 9;
    min.dd = max.dd = left.mm = right.dd = 6;
}

int main()
{
    init();
    int n, num = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
        if(more_or_equ(temp, left) && less_or_equ(temp, right)) {
            ++num;
            if (less_or_equ(temp, max)) max = temp;
            if (more_or_equ(temp, min)) min = temp;
        }
    }

    if (num == 0) printf("0\n");
    else printf("%d %s %s\n", num, max.name, min.name);

    return 0;
}
*/
