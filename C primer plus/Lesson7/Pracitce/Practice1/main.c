//Practice1.c--���ʵ�ֱ���ո��������з��������������ַ���
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
