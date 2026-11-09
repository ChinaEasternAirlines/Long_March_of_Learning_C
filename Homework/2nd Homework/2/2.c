#include<stdio.h>
#include<string.h>

int main()
{
    char input1[80],input2[80];
    char *where;
    int times = 0,length;
    int locations[80];

    printf("设计者 InsupiovJapan\n");
    printf("中国东方航空公司广西分公司\n");
    printf("Version 1.0\n");
    
    scanf("%s", input1);
    scanf("%s", input2);

    length = strlen(input2);

    where = strstr(input1,input2);
    while(where != NULL)
    {
        locations[times] = where - input1 + 1;
        times++;
        where = strstr(where + length,input2);
    }
    
    printf("出现位置:\n");
    for (int i = 0; i < times; i++)
    {
        printf("%d ",locations[i]);
    }
    printf("\n共出现%d次\n",times);
    return 0;
}