// Programming Exercise 7-7
#include <stdio.h>
#define BASEHRS 40 // hours at basepay
#define OVERTIME 1.5 // 1.5 time
#define AMT1 300 // 1st rate tier
#define AMT2 150 // 2st rate tier
#define RATE1 0.15 // rate for 1st tier
#define RATE2 0.20 // rate for 2nd tier
#define RATE3 0.25 // rate for 3rd tier
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
    printf("1)   $8.75/hr                                         2) $9.33/hr\n");
    printf("3)   $10.00/hr                                        4) $11.20/hr\n");
    printf("5)   quit                                                        \n");
    printf("*****************************************************************\n");
    while(scanf("%d",&n) == 1 && n != 5)
    {
        switch(n)
        {
            case 1:basepay = 8.75;
                   printf("The basepay is $%lf/hr\n",basepay);
                   break;
            case 2:basepay = 9.33;
                   printf("The basepay is $%lf/hr\n",basepay);
                   break;
            case 3:basepay = 10.00;
                   printf("The basepay is $%lf/hr\n",basepay);
                   break;
            case 4:basepay = 11.20;
                   printf("The basepay is $%lf/hr\n",basepay);
                   break;
        }
        printf("Enter the number of hours worked this week: ");
        scanf("%lf", &hours);
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
