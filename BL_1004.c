#include <stdio.h>

struct stu {
    char name[12];
    char id[12];
    int score;
} stu, max, min;

int main()
{
    int i, n;
    max.score = -60;
    min.score = 200;

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%s %s %d", &stu.name, &stu.id, &stu.score);
        if (stu.score > max.score)
            max = stu;
        if (stu.score < min.score)
            min = stu;
    }
    printf("%s %s\n%s %s", max.name, max.id, min.name, min.id);
    
    return 0;
}



