//Practice2.c--ÿ�д�ӡ�˸��ַ�����ASCII��
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    char count = 0;
    printf("Please enter the character: \n");
    while((ch = getchar()) != STOP)
    {
       if(ch == '\n')
            continue;
       count++;
       printf("%c %d ",ch,ch);
       if(count%8 == 0)
            printf("\n");
    }
    return 0;
}
