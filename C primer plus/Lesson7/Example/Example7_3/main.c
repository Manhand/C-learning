/*cypher2.c--�滻�������ĸ�����ַ���ĸ���ֲ���*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    while((ch = getchar())
                          != '\n')
    {
        if(isalpha(ch))          //�����һ���ַ�
            putchar(ch + 1);     //��ʾ���ַ�����һ���ַ�
        else                     //����
            putchar(ch);         //ԭ����ʾ
    }
    putchar(ch);                  //��ʾ���з�

    return 0;
}
