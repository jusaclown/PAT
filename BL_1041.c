#include <stdio.h>

struct stu {
    long long int stu_id;
    int seat_id ;
} stu[1001];

int main()
{
    int i, n, m, test_seat, seat;
    long long int id;

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%lld %d %d", &id, &test_seat, &seat);
        stu[test_seat].stu_id = id;
        stu[test_seat].seat_id = seat;
    }
    scanf("%d", &m);
    for (i = 0; i < m; ++i) {
        scanf("%d", &test_seat);
        printf("%lld %d\n", stu[test_seat].stu_id, stu[test_seat].seat_id);
    }
    return 0;
}


