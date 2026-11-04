# [题号1009] 
## 📝 题目描述

给出一个不多于5位的整数，要求 

1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123

输入格式

一个不大于5位的数字
输出格式

三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数

# 简单粗暴的解法，Python风味的C语言，八旬老太都能倒背如流(真的吗)!

## 💡 解题思路

万位就是这个数整除10000，千位就是这个数减去“整万（比如40000这种）”再整除1000，即原数减去（万位乘一万）再整除10000，以此类推各位的数。

那么怎么知道这个数有多少位数呢？
很简单！只需要判断首个非零整数值出现在哪一位上即可！

例如：`0 0 9 1 9`
首个非零整数值9出现在百位，那这个数就是一个3位数（个、十、百）xd

至于判断为什么用的是复杂的if......
才......才不是因为......因为写Python习惯了，所.....所以才用if的......的呢......绝对不是......(>﹏<)

## ⚠️ 注意事项

不要漏了一万、一千的0，导致运算错误！
if很多，注意条件，复制的时候记得把上一条多出来的删掉 =)

## 💻 参考代码 (C语言版)

```c
#include <stdio.h>

int main(void)
{
    int x, length;
    scanf("%d", &x);
    int a, b, c, d, e;
    
    a = x / 10000;   /* 初见端倪 */
    b = (x - a * 10000) / 1000;
    c = (x - a * 10000 - b * 1000) / 100;
    d = (x - a * 10000 - b * 1000 - c * 100) / 10;
    e = (x - a * 10000 - b * 1000 - c * 100 - d * 10);
    
    if (a != 0)     /* 一连串的if&else if......是Python风味吧 */
    {
        length = 5;
        printf("%d\n", length);
        printf("%d %d %d %d %d\n", a, b, c, d, e);
        printf("%d\n", e * 10000 + d * 1000 + c * 100 + b * 10 + a); 
    }
    else if (b != 0)
    {
        length = 4;
        printf("%d\n", length);
        printf("%d %d %d %d\n", b, c, d, e);
        printf("%d\n", e * 1000 + d * 100 + c * 10 + b); 
    }
    else if (c != 0)
    {
        length = 3;
        printf("%d\n", length);
        printf("%d %d %d\n", c, d, e);
        printf("%d\n", e * 100 + d * 10 + c); 
    }
    else if (d != 0)
    {
        length = 2;
        printf("%d\n", length);
        printf("%d %d\n", d, e);
        printf("%d\n", e * 10 + d); 
    }
    else
    {
        length = 1;
        printf("%d\n", length);
        printf("%d\n", e);
        printf("%d\n", e); 
    }
    
    return 0;
}
```

## 🐍 另附赠纯正 Python 版本

```Python
x = int(input())

a = x // 10000
b = (x - a * 10000) // 1000
c = (x - a * 10000 - b * 1000) // 100
d = (x - a * 10000 - b * 1000 - c * 100) // 10
e = x - a * 10000 - b * 1000 - c * 100 - d * 10

if a != 0:
    length = 5
    print(length)
    print(a, b, c, d, e)
    print(e * 10000 + d * 1000 + c * 100 + b * 10 + a)
elif b != 0:
    length = 4
    print(length)
    print(b, c, d, e)
    print(e * 1000 + d * 100 + c * 10 + b)
elif c != 0:
    length = 3
    print(length)
    print(c, d, e)
    print(e * 100 + d * 10 + c)
elif d != 0:
    length = 2
    print(length)
    print(d, e)
    print(e * 10 + d)
else:
    length = 1
    print(length)
    print(e)
    print(e)
```
