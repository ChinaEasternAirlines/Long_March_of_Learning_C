#include <stdio.h>

int main(void)
{
    int weight,prize = 8,overweight;
    char choice;
    scanf("%d %c",&weight,&choice);
    if ( weight > 1000)
    {
        overweight = weight - 1000;

        prize = 8 + (overweight / 500) * 4;

        if (overweight % 500)
        {
            prize += 4;
        }
    }
    if (choice == 'y')
    {
        prize += 5;
    }
    printf("%d\n",prize);
    return 0;
}