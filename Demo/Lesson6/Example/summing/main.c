/*summing.c--�����û�������������*/
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;                                //��sum��ʼ��Ϊ0
    int status;

    //char c1,c2;
    //printf("%d\n",scanf("%c %c",&c1,&c2));      //���سɹ���ȡ������
    printf("Please enter an integer to be summed ");
    printf("(q to quit)");
    status = scanf("%ld",&num);
    printf("%d",status);
    while(status == 1)                            //==����˼�ǡ����ڡ�
    {
        sum = sum +num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld",&num);
    }
    printf("Those integers sum to %ld.\n",sum);

    return 0;
}
