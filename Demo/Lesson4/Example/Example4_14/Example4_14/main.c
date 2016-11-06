/*longstrg.c--打印较长的字符串*/
#include <stdio.h>
int main(void)
{
    printf("Here's one way to print a");
    printf("long string.\n");//两个pirint语句
    printf("Here's another way to print a \
long string.\n");//续行符
    printf("Here's the newest way to print a "
           "long string.\n");//ANSI C

    return 0;
}
