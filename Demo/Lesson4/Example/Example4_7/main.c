/*width.c--�ֶο��*/
#include <stdio.h>
#define PAGES 959
#define PAGES1 "Hello World!"
int main(void)
{

    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);  //�ֶο���Զ������Է��������ĳ���
    printf("*%10d*\n",PAGES);  //10�ֶο��
    printf("*%-10d*\n",PAGES); //����ӡֵ�����
    printf("*%.11s*\n",PAGES1);//����ӡ�ַ����������
    printf("%5.4d\n",PAGES);    //��ʾ����ӡ���ֵ���Сλ��,���б�Ҫ��ʹ��ǰ��0���ﵽ���λ��

    return 0;
}
