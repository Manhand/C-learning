#include <stdio.h>
int main(void)
{
    int i;

    srand((unsigned)time(NULL));     //系统启动后经过的微秒数初始化随机种子
    for(i = 0; i < 100; i++)
    {

        int num = rand();
        printf("%d\n",num);
    }

    printf("s = %s\r",ch_ar);
    printf("s = %s\r",ch_ar2);
    return 0;
}
/*
在For循环中生成多个随机数的时候要把new Random()放到循环外面。

随机数的原理：

线性同余法：第n+1个数=(第n个数*29+37) % 1000

编写一个自己的随机数类：
*/
