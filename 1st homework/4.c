#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int answer,a,b,equal,score = 0;
    /* answer为答案,a,b为两个整数,score顾名思义xd*/
    /*equal为1时表示加法，为2时表示减法，为3时表示乘法，为4时表示除法*/
    printf("设计者 李富韬\n");
    printf("版本号 Alpha 1.0\n");
    for(int i = 1;i <= 10;i++){
        equal = rand() % 4 + 1;
        a = rand() % 100;
        b = rand() % 100;
        /*试了一下,不限定范围的话给出的算式小学生真的能算出来吗🧐
        按照题例的给法,就当是100以内的吧😼*/
        if (equal == 1){
            printf("%d + %d = ",a,b);
            scanf("%d",&answer);
            if (answer == a + b){
                printf("ok\n");
                score = score + 10;
            }
            else{
                printf("no\n");
                score = score;
            }
        }
        else if (equal == 2){
            printf("%d - %d = ",a,b);
            scanf("%d",&answer);
            if (answer == a - b){
                printf("ok\n");
                score = score + 10;
            }
            else{
                printf("no\n");
                score = score;
            }
        }
        else if (equal == 3){
            printf("%d * %d = ",a,b);
            scanf("%d",&answer);
            if (answer == a * b){
                printf("ok\n");
                score = score + 10;
            }
            else{
                printf("no\n");
                score = score;
            }
        }
        else if (equal == 4){
            if (b == 0){
                b = rand() % 100 + 1;
            }
            printf("%d / %d = ",a,b);
            scanf("%d",&answer);
            if (answer == a / b){
                printf("ok\n");
                score = score + 10;
            }
            else{
                printf("no\n");
                score = score;
            }
        }
        /*真是一场酣畅淋漓的嵌套啊.对了下面还有一层😩*/
        }
        int n = score / 10;
        /*好吧😑到这里才发现忘记算答对的题目数了QAQ
        不对,好像也不用算的说......
        就留在这吧,权当纪念?*/
        printf("\n%d\n",score);
    return 0;
}