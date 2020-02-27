#include <stdio.h>
#include <stdbool.h>

typedef struct person person;
struct person {
    char id[20];
    int hh, mm, ss;
}temp, ans1, ans2;

bool great(person a, person b) {
    if (a.hh != b.hh) return a.hh > b.hh;
    if (a.mm != b.mm) return a.mm > b.mm;
    return a.ss > b.ss;
}

int main()
{
    int n;
    ans1.hh = 24, ans1.mm = 0, ans1.ss = 0;
    ans2.hh = 0, ans2.mm = 0, ans2.ss = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d:%d:%d", temp.id, &temp.hh, &temp.mm, &temp.ss);
        if (!great(temp, ans1))
            ans1 = temp;
        scanf("%d:%d:%d", &temp.hh, &temp.mm, &temp.ss);
        if (great(temp, ans2))
            ans2 = temp;
    }
    printf("%s %s", ans1.id, ans2.id);
    return 0;
}



