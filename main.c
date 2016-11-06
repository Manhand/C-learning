#include <stdio.h>
#include <stdlib.h>
void trystat(void);

int main(void)
{
    int count;

    for(count = 1; count <= 3; count++)
    {
        printf("Here comes iteration %d:",count);
        trystat();
    }

    return 0;
}

void trystat(void)
{
    int fade = 1;
    static int stay = 1;   //块作用域的静态变量:块作用域、无链接、静态存储期
                           //程序离开函数,stay变量不消失,直到程序执行结束
    printf("fade = %d and stay = %d\n",fade++,stay++);
}
/*
Here comes iteration 1:fade = 1 and stay = 1
Here comes iteration 2:fade = 1 and stay = 2
Here comes iteration 3:fade = 1 and stay = 3
*/
