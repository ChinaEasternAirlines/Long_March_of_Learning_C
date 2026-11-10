#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if( 60 > a || 60 > b)
    {
        if( 60 > a && 60 > b){printf("0\n");}
        else printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0; 
}