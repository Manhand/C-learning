#include <stdio.h>
/*print2.c--����printf()������*/
int main(void)
{
    unsigned int un = 3000000000;//intΪ32λ��shortλ16λ��ϵͳ
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n",un,un);//�޷���ʮ�������� �з���ʮ��������
    printf("end = %hd and %d\n",end,end);//�з���short������� �з���int������� end���Զ�ת��Ϊint����
    printf("big = %ld and not %hd\n",big,big);//ʹ��h������ʾ�ϴ����ֱ��ضϵ������
    printf("verybig = %lld and not %ld\n",verybig,verybig);
    return 0;
}
