#include<stdio.h>

int main(void)
{
    int x,length;
    scanf("%d",&x);
    int a,b,c,d,e;
    a = x/10000;
    b = (x - a*10000)/1000;
    c = (x - a*10000 - b*1000)/100;
    d = (x - a*10000 - b*1000 - c*100)/10;
    e = (x - a*10000 - b*1000 - c*100 - d*10);
    if (a != 0)
    {
        length = 5;
        printf("%d\n",length);
        printf("%d %d %d %d %d\n",a,b,c,d,e);
        printf("%d\n",e*10000 + d*1000 + c*100 + b*10 + a); 
    }
    else if (b != 0)
    {
        length = 4;
        printf("%d\n",length);
        printf("%d %d %d %d\n",b,c,d,e);
        printf("%d\n",e*1000 + d*100 + c*10 + b); 
    }
    else if (c != 0)
    {
        length = 3;
        printf("%d\n",length);
        printf("%d %d %d\n",c,d,e);
        printf("%d\n",e*100 + d*10 + c); 
    }
    else if (d != 0)
    {
        length = 2;
        printf("%d\n",length);
        printf("%d %d\n",d,e);
        printf("%d\n",e*10 + d); 
    }
    else
    {
        length = 1;
        printf("%d\n",length);
        printf("%d\n",e);
        printf("%d\n",e); 
    }
    return 0;
}