/**********************************
*for_show.c--��ӡ��һ�о���һ�Σ���
*�û�����6֮ǰ���ϵĽ�������
*ע:��һ�����ʽ����ֻ����������ֵ��
*�����ʹ��printf()������forѭ����
*һ�����ʽִֻ��һ��
***********************************/
#include <stdio.h>
int main(void)
{
    int num = 0;

    for(printf("Keep entering numbers!\n"); num != 6;)
        scanf("%d",&num);
    printf("That's the one I want!\n");

    return 0;
}
