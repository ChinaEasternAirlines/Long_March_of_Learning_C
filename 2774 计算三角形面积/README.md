# [题号2774] 
## 📝 题目描述

平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少。

输入格式

输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。

输出格式

输出也是一行，输出三角形的面积，精确到小数点后两位。

## 💡 我的思路

利用海伦公式:S=sqrt(p*(p-a)*(p-b)*(p-c)),p=(a+b+c)/2

## 🐛 踩坑记录 (Bug Log)

莫名其妙出问题,莫名其妙又好了......

用了个无意义的fabs()来算绝对值,其实根本没必要的说(>﹏<)

又及:abs()与fabs()都是求绝对值,只是abs用于int等,fabs用于float等
## 💻 代码实现

```C
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
