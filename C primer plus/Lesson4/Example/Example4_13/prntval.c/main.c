/*prntval.c--printf()�ķ���ֵ*/
#include <stdio.h>
//��ӡ��Ϣ�͸�������ֵ
int main(void)
{
    int bph2o = 212;
    int rv;

    //��printf()�����ķ���ֵ�����������ַ���������ֵ��rv
    rv = printf("%d F is water's boiling point.\n",bph2o);
    printf("The printf() function printed %d characters.\n",rv);

    return 0;
}
