//partb.c--��������ಿ��
//��parta.cһ�����
#include <stdio.h>

extern int count;         //����ʽ����

static int total = 0;     //��̬����,�ڲ�����
void accumulate(int k);   //����ԭ��

void accumulate(int k)    //k���п�������,������
{
    static int subtotal = 0;//��̬,������

    if(k <= 0)
    {
        printf("loop cycle:%d\n",count);
        printf("subtotal:%d;total:%d\n",subtotal,total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}