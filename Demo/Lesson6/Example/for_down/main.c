/*for_down.c--���õݼ���������ݼ�������*/
//forѭ����һ���÷�
#include <stdio.h>
int main(void)
{
    int secs;

    for(secs = 5;secs > 0;secs--)
        printf("%d seconds!\n",secs);
    printf("We have ignition!\n");

    return 0;
}
