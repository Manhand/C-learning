/*square.c--��ȡ�û��������������ޣ������㷶Χ��������ƽ����*/
#include <stdio.h>
int main(void)
{
    int down,up;
    int sum,i;
    int dsquare;

    printf("Enter lower and upper integer limits:");
    scanf("%d %d",&down,&up);
    sum = dsquare = 0;
    for(i = down; i <= up; i++)
    {
        dsquare = i * i;
        sum += dsquare;
    }
    printf("The sum of the squares from %d to %d is %d\n",down*down,up*up,sum);

    printf("Enter next set of limits:");
    scanf("%d %d",&down,&up);
    while(down < up)
    {

        sum = dsquare = 0;
        for(i = down; i <= up; i++)
        {
            dsquare = i * i;
            sum += dsquare;
        }
        printf("The sum of the squares from %d to %d is %d\n",down*down,up*up,sum);
        printf("Enter next set of limits:");
        scanf("%d %d",&down,&up);
    }
    printf("Down");

    return 0;
}
