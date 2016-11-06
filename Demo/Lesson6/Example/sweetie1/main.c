/*sweetie1.c--一个计数循环*/
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count = 1;                       //初始化

    while(count <= NUMBER)               //测试
    {
        printf("Be my Valentine!\n");    //行为
        count++;                         //更新计数
    }
}
/*
计数循环：执行循环之前就已经知道重复执行的次数
不确定循环：指在测试表达式为假之前，不知道重复执行的次数
*/
