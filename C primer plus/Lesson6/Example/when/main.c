//when.c-��ʱ�˳�ѭ��
#include <stdio.h>
int main(void)
{
    int n = 5;

    while(n < 7)                       //������
    {
        printf("n = %d\n",n);
        n++;                           //��ʮ��
        printf("Now n = %d\n", n);     //��ʮһ��
    }
    printf("The loop has finished.\n");

    return 0;
}
