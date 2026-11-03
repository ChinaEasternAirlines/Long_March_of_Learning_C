#include<stdio.h>
/*#include<stdbool.h>*/

int main(void)
{
    double a,b,c,d,x;
    double final;
    scanf("%lf %lf %lf %lf %lf",&x,&a,&b,&c,&d);
    final = a*x*x*x + b*x*x + c*x +d;
    printf("%.7lf\n",final);
    return 0;
}