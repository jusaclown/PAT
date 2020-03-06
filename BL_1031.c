#include <stdio.h>

int main()
{
    int n, z, sum, count=0, ans[100] = {0};
    int we[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char check[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

    scanf("%d", &n);
    char id[n][20];
    for (int i = 0; i < n; i++) {
        scanf("%s", id[i]);
        sum = 0;
        for (int j = 0; j < 17; j++) {
            z = id[i][j] - '0';
            if (z >= 0 && z < 10)
                sum = sum + z * we[j];
            else {
                sum = -1;
                break;
            }
        }
        sum %= 11;
        if (check[sum] != id[i][17]) {
            ans[count] = i;
            count++;
        }
    }


    if (count == 0)
        printf("All passed");
    else {
        for (int i = 0; i < count; i++)
            printf("%s\n", id[ans[i]]);
    }

    return 0;
}


