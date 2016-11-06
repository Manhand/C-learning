#include <stdio.h>

int main(void)
{
    double n1,n2,sum1,sum2,divide;    //分别为分子和分母
    int index,size,t;

    printf("Enter the times:");
    scanf("%d",&size);
    while(size > 0)
    {
        n1 = n2 = 1.0;                //分子分母赋值为1.0
        divide = sum1 = 0.0;
        for(index = 0; index < size; index++)
        {
            divide = n1/n2;
            sum1 += divide;
            n2++;
        }
        printf("The sum of these number is %lf\n",sum1);


        n1 = n2 = 1.0;                //分子分母赋值为1.0
        t = 1;                        //决定0~1个元素的正负
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
        scanf("%d",&size);                   //再次读取次数
    }
    printf("Done!");

    return 0;
}
