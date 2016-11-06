#include <stdio.h>
#define S_PER_H 60
int main(void)
{
    int hours,mins,minutes;
    printf("Enter the value n:\n");
    scanf("%d",&minutes);
    while(minutes > 0)
    {
        hours = minutes/S_PER_H;
        mins = minutes%S_PER_H;
        printf("%d minutes = %d hours, %d minutes\n", minutes, hours, mins);
        scanf("%d",&minutes);
    }

    return 0;
}
