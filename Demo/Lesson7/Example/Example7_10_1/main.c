//break.c--Ƕ��ѭ���ڲ��breakֻ���ó����������ĵ�ǰѭ��
#include <stdio.h>
int main(void)
{
    int p,q;
    scanf("%d",&p);
    while(p > 0)
    {
        printf("%d\n",p);
        scanf("%d",&q);
        while(q > 0)
        {
            printf("%d\n",q*p);
            if(q > 100)
                break;  //�����ڲ�ѭ��
            scanf("%d",&q);
        }
        if(q > 100)
            break;     //�������ѭ��
        scanf("%d",&p);
    }

    return 0;
}
