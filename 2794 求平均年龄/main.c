#include <stdio.h>

double averageValue(int a[],int num)
{
    double sum = 0.0;
    for(int j = 0;j < num;j++)
    {
        sum += a[j];
    }
    return sum / num;
}
int main(void)
{
    int n,age,ages[80];
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&age);
        ages[i] = age;
    }
    printf("%.2lf\n",averageValue(ages,n));
    return 0;
}
