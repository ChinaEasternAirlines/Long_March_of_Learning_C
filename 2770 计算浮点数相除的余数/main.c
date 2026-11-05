#include<stdio.h>
int main()
{
    double a,b,r;
    scanf("%lf %lf",&a,&b);
    int c = a/b;
    r = a - c*b;
    printf("%g\n",r);
    return 0;

}