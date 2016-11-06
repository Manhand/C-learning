// Programming Exercise 7-7
#include <stdio.h>
#include "head.h"
int main(void)
{
    int n;         //标签
    double basepay;//基本工资
    double hours;  //工作时间
    double gross;  //工作总额
    double net;    //工作净收入
    double taxes;  //工作税金
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a)   $8.75/hr                                         b) $9.33/hr\n");
    printf("c)   $10.00/hr                                        d) $11.20/hr\n");
    printf("q)   quit                                                        \n");
    printf("*****************************************************************\n");
    while((n = getchar()) != 'q' )
    {
        switch(n)
        {
            case 'a':basepay = 8.75;
                     printf("The basepay is $%lf/hr\n",basepay);
                     break;
            case 'b':basepay = 9.33;
                     printf("The basepay is $%lf/hr\n",basepay);
                     break;
            case 'c':basepay = 10.00;
                     printf("The basepay is $%lf/hr\n",basepay);
                     break;
            case 'd':basepay = 11.20;
                     printf("The basepay is $%lf/hr\n",basepay);
                     break;
            default:printf("Erroy!Please enter the character a/b/c/d/q\n");
                     break;
        }
        printf("Enter the number of hours worked this week: ");
        scanf("%lf", &hours);

        while(getchar() != '\n')  //混合输入清除'\n'
                  continue;

        if (hours <= BASEHRS)
            gross = hours * basepay;
        else
            gross = BASEHRS * basepay + (hours - BASEHRS) * basepay * OVERTIME;
        if (gross <= AMT1)
            taxes = gross * RATE1;
        else if (gross <= AMT1 + AMT2)
            taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
        else
            taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;
        net = gross - taxes;

        printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);
    }

    return 0;
}
