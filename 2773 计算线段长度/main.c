#include<stdio.h>
#include <math.h>
int main(void)
{
    double Xa,Xb,Ya,Yb,x,y;
    double length;
    scanf("%lf %lf",&Xa,&Ya);
    scanf("%lf %lf",&Xb,&Yb);
    if (Xa > Xb)
    {
        x = Xa - Xb;
    }
    else
    {
        x = Xb - Xa;
    }
    if (Ya > Yb)
    {
        y = Ya - Yb;
    }
    else
    {
        y = Yb - Ya;
    }
    length = sqrt(x*x + y*y);
    printf("%.3lf\n",length);
    return 0;
}