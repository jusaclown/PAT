/* 大佬代码，真滴优秀orz */
#include <stdio.h>

int main()
{
    int num, index, flag = 0;

    while (scanf("%d %d", &num, &index) != EOF) {
        if (num * index) {
            if (flag)
                printf(" ");
            else
                flag = 1;
            printf("%d %d", num*index, index-1);
        }
    }
    if (!flag) printf("0 0");
    return  0;
}
