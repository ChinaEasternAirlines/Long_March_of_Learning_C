#include<stdio.h>
#include <math.h>
#include<stdlib.h>

int main(void)
{
    float xA,yA,xB,yB,xC,yC;
    double a,b,c,p;
    double s;
    scanf("%f %f %f %f %f %f",&xA,&yA,&xB,&yB,&xC,&yC);
    a = sqrt(pow(fabs(xB-xC),2) + pow(fabs(yB-yC),2));
    b = sqrt(pow(fabs(xA-xC),2) + pow(fabs(yA-yC),2));
    c = sqrt(pow(fabs(xA-xB),2) + pow(fabs(yA-yB),2));
    p = (a+b+c)/2.0;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2lf\n",s);
    return 0;
}