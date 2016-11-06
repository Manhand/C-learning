#include <stdio.h>
int main(void)
{
    int weight,height;      //weight以磅为单位,height以英寸为单位
    printf("Please enter the value of your weight and height:");
    scanf("%d %d",&weight,&height);
    if(weight < 100 && height > 64)

        if(height > 72)
            printf("You are very tall for your weight.\n");
        else
            printf("You are tall for your weight.\n");

    else if(weight > 300 && height < 48)

        printf("You are quite short for your weight.\n");

    else

        printf("Your weight is ideal.\n");

        return 0;

}
