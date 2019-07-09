#include<stdio.h>

int main()
{
    int a, b, sum, r, d, i;
    int num[35];	/*这个数组不能太小，会有一个二进制的大数*/
    i = -1;

    scanf("%d %d %d", &a, &b, &d);
    sum = a + b;
    do {		/* 之所以用do while是因为当和为0时，while会直接退出 */
        r = sum % d;
        num[++i] = r;
        sum /= d;
    } while (sum != 0);

    while (i != -1) {
        printf("%d", num[i--]);
    }

    return 0;
}
