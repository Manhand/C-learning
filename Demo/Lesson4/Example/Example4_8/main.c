/*float.c--һЩ���������η������*/
#include <stdio.h>
int main(void)
{
    const double RENT =  3852.99;

    printf("*%f%\n", RENT);    //�Ը�����Ĭ����ʽ���
    printf("*%e%\n", RENT);    //e���������
    printf("*%4.2f%\n",RENT);  //�ֶο��4���Զ������Է��ϸ��������� ����2���������룩
    printf("*%3.1f%\n",RENT);  //�ֶο��3���Զ������Է��ϸ��������� ����1���������룩
    printf("*%10.3f%\n",RENT); //�ֶο��10 ����3
    printf("*%11.3E%\n",RENT); //e������������ֶο��11������3
    printf("*%+4.2f%\n",RENT); //������ǰ��ʾ+
    printf("*%010.2f%\n",RENT);//ǰ��0����ֶο��
    printf("*%010.4g%\n",RENT);//��ʾ��Ч���ֵ����λ��

    return 0;
}
