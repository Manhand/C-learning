//elseif.c--else和if配对(else遵循就近原则--和距离近的if配对)
#include <stdio.h>
int main(void)
{
    int number;

    printf("Enter the number:\n");
    scanf("%d",&number);
    /*
    if(number > 6)
        if(number < 12)
            printf("You're close!\n");
    else
        printf("Sorry,you lose a turn!\n");
    */
    if(number > 6)
    {
        if(number < 12)
            printf("You're close!\n");
    }
    else
        printf("Sorry,you lose a turn!\n");

    return 0;
}
