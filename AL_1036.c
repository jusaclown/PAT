#include <stdio.h>

struct student{
    char gender, name[12], id[12];
    int grade;
}stu, low, high;

int main()
{
    int n;
    low.grade = 101, high.grade = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %c %s %d", stu.name, &stu.gender, stu.id, &stu.grade);
        if (stu.gender == 'M') {
            if (stu.grade < low.grade)
                low = stu;
        }
        else {
            if (stu.grade > high.grade)
                high = stu;
        }

    }

    if (high.grade == -1)
        printf("Absent\n");
    else
        printf("%s %s\n", high.name, high.id);

    if (low.grade == 101)
        printf("Absent\n");
    else
        printf("%s %s\n", low.name, low.id);

    if (high.grade == -1 || low.grade == 101)
        printf("NA");
    else
        printf("%d", high.grade - low.grade);

}

