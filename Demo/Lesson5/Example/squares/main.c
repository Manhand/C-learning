/*squares.c--����1~20��ƽ��*/
#include <stdio.h>
int main(void)
{
    int num = 1;

    while(num < 20)
    {
        printf("%4d %6d\n",num,num*num);
        num = num + 1;
    }

    return 0;
}
