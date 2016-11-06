#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define LEVEL1 17850
#define LEVEL2 23900
#define LEVEL3 29750
#define LEVEL4 14875
int main(void)
{
    int lable;
    int level;
    double income;
    double rate;
    printf("*******************************\n");
    printf("Please enter your states: \n");
    printf("1) \"单身\"          2) \"户主\"\n");
    printf("3) \"已婚,共有\"     4) \"已婚,离异\"\n");
    printf("5) quit\n");
    while(scanf("%d",&lable) == 1)
    {
        //scanf("%d",&lable);
        switch(lable)
        {
            case 1:level = LEVEL1;
                   break;
            case 2:level = LEVEL2;
                   break;
            case 3:level = LEVEL3;
                   break;
            case 4:level = LEVEL4;
                   break;
            default:
                   printf("You should choose the number"
                   " between 2 and 4(q to quit).\n");
                   printf("Please enter the right number:\n");
                   continue;
        }
        printf("Please enter your income: \n");
        scanf("%lf",&income);
        if(income < level)
            rate = level * RATE1;
        else
            rate = level * RATE1 + (income - level) * RATE2;
        printf("Your taxes is %g.\n", rate);
		printf("Please enter next type in integer:(q to quit)\n");
    }
    printf("That's all!\n");

	return 0;
}
