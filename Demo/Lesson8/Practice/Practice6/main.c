//menuette.c--�˵�����
#include <stdio.h>
#include <ctype.h>

char get_first(void);            //��ȡ���ַ�

int main(void)
{
    printf("%d",get_first());

    return 0;
}
char get_first(void)
{
    int ch;
    ch = getchar();
    if(!isspace(ch))
       return;
    while(getchar() != '\n')
        continue;          //����������ʣ�ಿ��

    return ch;
}




