/*for_head.c--ѭ�������Ϊ���Ըı�ѭ��ͷ�еı��ʽ*/
#include <stdio.h>
int main(void)
{
    int delta;
    int n;
    //printf("Enter the value of delta:");
    //scanf("%d",&delta);
    for(n = 1; n < 10; n = n + delta)
    {
        delta = 1;
        //delta = 2;
        printf("That's the one I want!\n");
    }

    return 0;
}
