/*for_13s.c--�ü���������ĳ����ֵ*/
#include <stdio.h>
int main(void)
{
    int n;                //��2��ʼ��ÿ�ε���13
    for(n = 2; n < 60; n = n + 13)
        printf("%d\n",n);

    return 0;
}
