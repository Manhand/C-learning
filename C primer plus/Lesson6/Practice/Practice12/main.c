#include <stdio.h>

int main(void)
{
    double n1,n2,sum1,sum2,divide;    //�ֱ�Ϊ���Ӻͷ�ĸ
    int index,size,t;

    printf("Enter the times:");
    scanf("%d",&size);
    while(size > 0)
    {
        n1 = n2 = 1.0;                //���ӷ�ĸ��ֵΪ1.0
        divide = sum1 = 0.0;
        for(index = 0; index < size; index++)
        {
            divide = n1/n2;
            sum1 += divide;
            n2++;
        }
        printf("The sum of these number is %lf\n",sum1);


        n1 = n2 = 1.0;                //���ӷ�ĸ��ֵΪ1.0
        t = 1;                        //����0~1��Ԫ�ص�����
        divide = sum2 = 0.0;

        for(index = 0; index < size; index++)
        {
            if(index < 2)
            {
                divide = t*(n1/n2);
                t = -t;
            }
            else if(index%2 == 0)
                divide = n1/n2;
            else
                divide = -n1/n2;

            n2++;
            sum2 += divide;

        }
        printf("The sum of these number is %lf\n",sum2);
        printf("Enter the times:");
        scanf("%d",&size);                   //�ٴζ�ȡ����
    }
    printf("Done!");

    return 0;
}
