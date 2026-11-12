#include<stdio.h>

int main(void){
    int a,b,t,A,B,num;
    scanf("%d %d",&a,&b);
    A = a;
    B = b;
    while(b!=0){          /*这里是求最大公约数*/
        t = a%b;
        a = b;
        b = t;
    }             /*这里是求最小公倍数*/
    printf("%d %d\n",a,num = A*B/a);
    return 0;    

}