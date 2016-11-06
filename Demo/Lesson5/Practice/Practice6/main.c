/*addemup.c--计算20天内盈利*/
#include <stdio.h>
int main(void)
{
    int count,days,square,value;

    count = 0;
    square = 0;
    value = 0;
    printf("Enter the days:\n");
    scanf("%d",&days);
    while(count++ < days)
    {
        square++;
        value = square*square;
        printf("The %d days earn $%d!\n",count,value);
    }
    printf("That's all!\n");

    return 0;
}

