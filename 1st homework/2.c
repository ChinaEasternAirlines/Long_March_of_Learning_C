#include<stdio.h>
 /*int 石头 = 0, 剪刀 = 1, 布 = 2*/
int a,b;
int main(void)
{   printf("石头 = 0, 剪刀 = 1, 布 = 2,在前面的是A,在后面的是B\n");
    for(a = 0; a < 3; a++){
        for(b = 0;b < 3;b++){
            if (a == b){
                printf("%d%d\n",a,b);
                printf("AB平局\n");}
            else if ((a == 0 && b == 1) || (a == 1 && b == 2) || (a == 2 && b == 0)){
                printf("%d%d\n",a,b);
                printf("A获胜\n");
            }
            else{
                printf("%d%d\n",a,b);
                printf("B获胜\n");
            }
        }
    }
    return 0;
}        