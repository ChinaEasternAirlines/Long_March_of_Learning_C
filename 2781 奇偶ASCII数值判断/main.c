#include<stdio.h>

int main(void)
{
    int n,sum = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum = sum * 2;
    }
    printf("%d\n", sum);
    return 0;
}