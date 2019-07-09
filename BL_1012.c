#include <stdio.h>

int main()
{
    int a[6] = {0}, count[6] = {0};
    int num[1000];

    scanf("%d", &num[0]);
    for (int i = 1; i <= num[0]; ++i) {
        scanf("%d", &num[i]);
        switch (num[i] % 5) {
            case 0:
                if (num[i] % 2 == 0) {
                    ++count[1];
                    a[1] += num[i];
                }
                break;
            case 1:
                ++count[2];
                if (count[2] % 2 == 0)
                    a[2] -= num[i];
                else
                    a[2] += num[i];
                break;
            case 2:
                ++a[3];
                ++count[3];
                break;
            case 3:
                ++count[4];
                a[4] += num[i];
                break;
            case 4:
                ++count[5];
                if (num[i] > a[5])
                    a[5] = num[i];
                break;
            default:
                break;
        }
    }
    /* 这里输出还可以对每一个a进行讨论，如
     * if (count[1] == 0 printf("N" );
     * else printf("%d ", a[1]);
     * 这种方法直观性好了恨多。*/
    for (int j = 1; j <= 5; ++j ) {
        if (count[j] == 0 && j != 5)
            printf("N ");
        else if (count[j] == 0 && j == 5)
            printf("N");
        else if (count[j] != 0 && j == 4)
            printf("%.1f ", (double )a[4] / count[4]);
        else if (count[j] != 0 && j == 5)
            printf("%d", a[5]);
        else
            printf("%d ", a[j]);
    }
}


