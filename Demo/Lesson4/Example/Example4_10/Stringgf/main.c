/*Stringf.c--�ַ�����ʽ*/
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n",BLURB);      //�ֶο������Ϊ�������ַ����������ַ�
    printf("[%24s]\n",BLURB);     //�ֶο��λ24�������ַ���߲�0
    printf("[%24.5s]\n",BLURB);   //���������˴���ӡ�ַ��ĸ���
    printf("[%-24.5s]\n",BLURB);  //-���ʹ���ı���������

    return 0;
}
