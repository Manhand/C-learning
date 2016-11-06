/*for_head.c--循环体的行为可以改变循环头中的表达式*/
#include <stdio.h>
int main(void)
{
    int delta;
    int n;
    //printf("Enter the value of delta:");
    //scanf("%d",&delta);
    for(n = 1; n < 10; n = n + delta)
    {
        delta = 1;
        //delta = 2;
        printf("That's the one I want!\n");
    }

    return 0;
}
