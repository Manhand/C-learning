/*put1.c--��ӡ�ַ������������\n��*/
#include <stdio.h>
void put1(const char *string)
{
    while(*string)
    {
        putchar(*string++);
    }

}
