/*addemup.c--���ֳ��������*/
#include <stdio.h>
int main(void)                  //����ǰ20�������ĺ�
{
    int count,sum;              //����

    count = 0;                  //���ʽ���
    sum = 0;
    while(count++< 20)         //�������
    {
        sum = sum + count;
        printf("sum = %d\n",sum);//���ʽ���
    }

    return 0;                   //��ת���
}
