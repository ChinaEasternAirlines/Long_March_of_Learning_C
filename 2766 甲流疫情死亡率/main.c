#include<stdio.h>
/*#include<stdbool.h>*/

int main(void)
{
    int a,b;
    double c;
    double d;
    scanf("%d %d",&a,&b);
    c = (double)b/a;
    d = (double)c * 100;
    printf("%.3lf\n",c);
    printf("%.3lf%%\n",d);
    return 0;
}