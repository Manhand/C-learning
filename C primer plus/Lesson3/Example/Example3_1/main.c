/*platinum.c -- your weight in platinum*/
#include <stdio.h>
int main (void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("please enter your weight in pounds:");

    /*��ȡ�û�������*/
    scanf("%f",&weight);
    /*����׽�ļ۸���ÿ��˾17000*/
    /*14.5833���ڰ�Ӣ�����ⰻ˾ת���ɽ�ⰻ˾*/
    value = 1700.0*weight*14.5833;
    printf("Your weight in platinum is worth $%.f\n",value);
    printf("You are easily worth that! If platinum price drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}
