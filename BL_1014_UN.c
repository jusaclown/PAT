#include <stdio.h>
#include <string.h>

int main()
{
    char *week[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    char hour[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
                    'D', 'E', 'F', 'G', 'H', 'I', 'G', 'K', 'L', 'M', 'N'};
    char str[4][62], ans[4];
    int len, k = 0;

    for (int i = 0; i < 4; i++)
        scanf("%s", str[i]);

    for (int i = 0; str[0][i] != '\0'; i++) {
        if (str[0][i] <= 'Z' && str[0][i] >= 'A') {
            for (int j = 0; str[1][j] != '\0'; j++) {
                if (str[0][i] == str[0][j]) {
                    ans[k] = str[0][i];
                    ++k;
                    break;
                }
            }
        }
    }

    printf("%s", week[ans[0] - 'A']);
    printf("%d", week[ans[0] - 'A']);
    for (int i = 0; i < 2; i++)
        printf("%s", week[ans[i] - 'A']);


    return 0;
}





