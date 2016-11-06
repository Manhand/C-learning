/**********************************
*for_show.c--打印第一行句子一次，在
*用户输入6之前不断的接受数字
*注:第一个表达式不是只能用来赋初值，
*如可以使用printf()函数，for循环第
*一个表达式只执行一次
***********************************/
#include <stdio.h>
int main(void)
{
    int num = 0;

    for(printf("Keep entering numbers!\n"); num != 6;)
        scanf("%d",&num);
    printf("That's the one I want!\n");

    return 0;
}
