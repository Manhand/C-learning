#include <stdio.h>
int main(void)
{
    int i;

    srand((unsigned)time(NULL));     //ϵͳ�����󾭹���΢������ʼ���������
    for(i = 0; i < 100; i++)
    {

        int num = rand();
        printf("%d\n",num);
    }

    printf("s = %s\r",ch_ar);
    printf("s = %s\r",ch_ar2);
    return 0;
}
/*
��Forѭ�������ɶ���������ʱ��Ҫ��new Random()�ŵ�ѭ�����档

�������ԭ��

����ͬ�෨����n+1����=(��n����*29+37) % 1000

��дһ���Լ���������ࣺ
*/
