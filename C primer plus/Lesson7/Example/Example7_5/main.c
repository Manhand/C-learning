//divisors.c--使用嵌套if语句显示一个数的约数
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;          //待测试的数字
    unsigned long div;          //可能的约数
    bool isprime;               //素数标记

    printf("Please enter an integer for analysis;");
    printf("Enter q to quit.\n");
    while(scanf("%lu",&num) == 1)
    {
        for(div = 2,isprime = true; (div * div) <= num; div++)
        {
            if(num % div == 0)
            {
                if((div * div ) != num)
                    printf("%lu is divisible by %lu and %lu.\n",
                           num,div,num/div);
                else
                    printf("%lu is divisible by %lu.\n");
                isprime = false;         //该数不是素数
            }
        }
        if(isprime)
            printf("%lu is prime.\n",num);
        printf("Please enter another integer for analysis;");
        printf("Enter q to quit.\n");
    }

    printf("Bye.\n");

    return 0;
}
