#include<stdio.h>

int main()
{
    char *num[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int stack[1000];
    char n[100];
    int i, a, sum, top;
    sum = 0;
    top = -1;

    scanf("%s", n);
    for(i = 0; n[i] != '\0'; ++i) {
        sum += (n[i] - '0');
    }

    while( sum > 0) {
        a = sum % 10;
        stack[++top] = a;
        sum = sum / 10;
    }

    while( top != -1) {
        printf("%s", num[stack[top--]]);
        if (top > -1)
            printf(" ");
    }
    
    return 0;
}
