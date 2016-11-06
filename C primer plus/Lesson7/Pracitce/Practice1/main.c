//Practice1.c--编程实现报告空格数、换行符数、所以其他字符数
#include <stdio.h>
#include <ctype.h>
#define STOP '#'
#define SPACE ' '
#define ENTER '\n'
int main(void)
{
    char ch;
    int space_count,enter_count,another_count;
    space_count=enter_count=another_count=0;
    while((ch = getchar()) != STOP)
    {
        if(SPACE == ch)
            space_count++;
        else if(ENTER == ch)
            enter_count++;
        else
            another_count++;
    }
    printf("space_count:%d enter_count:%d another_count:%d",
           space_count,enter_count,another_count);

    return 0;
}
