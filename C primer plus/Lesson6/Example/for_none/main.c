/*for_none.c--����ʡ��һ���������ʽ�����ǲ�����ʡ�Էֺ�*/
/**********************************
*ע��ʡ�Եڶ������ʽ����λ��,�磺
*for(   ;   ;   )
*   printf("I want some action\n");
*��ѭ����һֱ����
**********************************/
#include <stdio.h>
int main(void)
{
    int ans,n;
    ans = 2;
    for(n = 3; ans <= 25;)
        ans = ans * n;
    printf("n = %d;ans = %d.\n",n,ans);

    return 0;
}
