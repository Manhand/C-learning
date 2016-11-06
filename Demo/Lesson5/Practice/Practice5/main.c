/*addemup.c--计算20天内盈利*/
#include <stdio.h>
int main(void)
{
    int count,days;
    float sum = 50.0;

    count = 0;
    sum = 50;
    printf("Enter the days:\n");
    scanf("%d",&days);
    while(count++ < days)
    {
        sum = sum*(1+0.25);
        printf("The %d days earn $%.1f!\n",count,sum);
    }
    printf("That's all!\n");

    return 0;
}
