# [题号1] 
## 📝 题目描述

校运动会马上要进行了，现在要进行入场仪式训练：12名女生和24名男生。系统随机产生这36名同学身高（女同学身高在150-180之间，男同学身高在160-190之间）。要求入场时12名女生按身高从低到高排成2行在前面，男生24按同样规则排4行在女生后面；编程输出排好序的身高数据（共6行，每行6个身高数据）（还可以更进一步，就是在每名同学身高后加括号后带上他们原来的编号）程序运行时前2行输出设计者+你的名字，version 1.0。

## 💡 我的思路

利用冒泡排序法进行


## 🐛 踩坑记录 (Bug Log)


## 💻 代码实现

```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int girls[12],boys[24];
    int temp,i,status,ii;
    printf("设计者 InsupiovJapan\n");
    printf("中国东方航空公司广西分公司\n");
    printf("Version 1.0\n");

    for(i = 0;i < 12;i++)/*这两个for用于随机生成升高*/
    {
        girls[i] = rand() % 31 + 150;
        /*printf("%d ",girls[i]);*/
    }
    /*printf("\n");*/
    for(i = 0;i < 24;i++)
    {
        boys[i] = rand() % 31 + 160;
        /*printf("%d ",boys[i]);*/
    }
    /*printf("\n");*/

    /*这两个for进行排序*/
    for(i = 0;i < 12 - 1;i++)/*女生*/
    {
        status = 0;
        for(ii = 0;ii < 12 - 1 - i;ii++)
        {
            if(girls[ii] > girls[ii + 1])
            {
                temp = girls[ii];
                girls[ii] = girls[ii + 1];
                girls[ii + 1] = temp;
                status = 1;
            }
        }
        if(status == 0)
        {
            break;
        }
    }
    for(i = 0;i < 24 - 1;i++)/*男生*/
    {
        status = 0;
        for(ii = 0;ii < 24 - 1 - i;ii++)
        {
            if(boys[ii] > boys[ii + 1])
            {
                temp = boys[ii];
                boys[ii] = boys[ii + 1];
                boys[ii + 1] = temp;
                status = 1;
            }
        }
        if(status == 0)
        {
            break;
        }
    }

    /*这里是输出部分*/
    status = 0;/*0为正常输出,1为调试输出*/
    if(status == 0)/*正常输出*/
    {
        for(i = 0;i < 6;i++)
        {
            printf("%d ",girls[i]);
        }
        printf("\n");
        for(i = 6;i < 12;i++)
        {
            printf("%d ",girls[i]);
        }
        printf("\n");
        for (i = 0;i < 6;i++)
        {
            printf("%d ",boys[i]);
        }
        printf("\n");
        for (i = 6;i < 12;i++)
        {
            printf("%d ",boys[i]);
        }
        printf("\n");
        for (i = 12;i < 18;i++)
        {
            printf("%d ",boys[i]);
        }
        printf("\n");
        for (i = 18;i < 24;i++)
        {
            printf("%d ",boys[i]);
        }
        printf("\n");
    }

    else if(status == 1)/*调试输出*/
    {
        for(i = 0;i < 12;i++)
        {
            printf("%d ",girls[i]);
        }
        printf("\n");
        for(i = 0;i < 24;i++)
        {
            printf("%d ",boys[i]);
        }
        printf("\n");
    }


    return 0;
}
    