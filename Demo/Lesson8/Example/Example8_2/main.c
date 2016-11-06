/*echo_eof.c--重复输入，直到文件结尾(crtl+Z识别为文件结尾信号)*/
#include <stdio.h>
int main(void)
{
    int ch;

    while((ch=getchar()) != EOF)
    {
        putchar(ch);
    }

    return 0;
}
