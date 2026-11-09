# [题号2781] 
## 📝 题目描述

任意输入一个字符，判断其ASCII是否是奇数，若是，输出YES，否则，输出NO。

例如，字符A的ASCII值是65，则输出YES，若输入字符B(ASCII值是66)，则输出NO。

输入格式

输入一个字符。

输出格式

如果其ASCII值为奇数，则输出YES，否则，输出NO。

## 💡 我的思路
略
## 🐛 踩坑记录 (Bug Log)

需要强制转换类型(char to int)

## 💻 代码实现

```C
#include<stdio.h>

int main(void)
{
    char n;
    scanf("%c",&n);
    n = (int)n;
    if(n % 2 == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}