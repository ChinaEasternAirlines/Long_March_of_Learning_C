# [题号2794] 
## 📝 题目描述

班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。

输入格式

第一行有一个整数n（1<= n <= 100），表示学生的人数。第二行共有n个整数，表示每个学生的年龄，取值为15到25，空格分开。

输出格式

输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。

## 💡 我的思路

先求n,再利用n次重复scanf来将值加入数组,最终再利用重复相加求出总和,除以总个数即为平均数

## 🐛 踩坑记录 (Bug Log)

(以下内容来自DeepSeek总结)

在 C 裡，[] 是下標運算子（subscript operator），它必須要有索引值，例如 ages[0]、ages[i]。單獨寫 ages[] 缺少索引，編譯器無法把它解析成一個運算式，所以報「必須是運算式，expected expression」。

把整個陣列傳給函式時，只要寫陣列名稱即可——陣列名稱會自動「衰減」成指向第一個元素的指標 int*，正好符合 averageValue(int a[], int num) 的參數型別

## 💻 代码实现

```C
#include <stdio.h>

double averageValue(int a[],int num)
{
    double sum = 0.0;
    for(int j = 0;j < num;j++)
    {
        sum += a[j];
    }
    return sum / num;
}
int main(void)
{
    int n,age,ages[100000];
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&age);
        ages[i] = age;
    }
    printf("%.2lf\n",averageValue(ages,n));
    return 0;
}

