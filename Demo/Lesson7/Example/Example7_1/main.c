//colddays.c--找出0C以下的天数占总天数的百分比
#include <stdio.h>
int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius,and enter q to quit.\n");
    while(scanf("%f",&temperature) == 1)
    {
        all_days++;
        if(temperature < FREEZING)
            cold_days++;
    }
    if(all_days != 0)
        printf("%d days otal:%.lf%% were below freezing.\n",
               all_days,100.0*(float)cold_days/all_days);//明确表达转换类型的意图
    if(all_days == 0)
        printf("No data entered!\n");

    return 0;
}
