/*echo_eof.c--�ظ����룬ֱ���ļ���β(crtl+Zʶ��Ϊ�ļ���β�ź�)*/
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
