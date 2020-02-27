#include <stdio.h>

int main()
{
    int n, b, a[100];
    int flag, i = 0;

    scanf("%d %d", &n, &b);
    do {
        a[i++] = n % b;
        n = n / b;
    }  while(n != 0);

    for (int k = 0; k < i/2; k++) {
        if (a[k] == a[i-1-k])
            flag = 1;
        else {
            flag = 0;
            break;
        }
    }

    if (flag == 1 || i == 1)
        printf("Yes\n");
    else
        printf("No\n");

    for (int j = i - 1; j >= 0; j--) {
        if (j == 0)
            printf("%d", a[j]);
        else
            printf("%d ", a[j]);
    }


    return 0;
}





