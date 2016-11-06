/*for_down.c--利用递减运算符来递减计数器*/
//for循环第一种用法
#include <stdio.h>
int main(void)
{
    int secs;

    for(secs = 5;secs > 0;secs--)
        printf("%d seconds!\n",secs);
    printf("We have ignition!\n");

    return 0;
}
