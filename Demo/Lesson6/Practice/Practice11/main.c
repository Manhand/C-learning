/*倒序打印数组中的元素*/
#include <stdio.h>
#define SIZE 8
int main(void)
{
    int i;
    int integer[8];

    printf("Please enter eight value:\n");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d",&integer[i]);
    }

    for(i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ",integer[i]);
    }

    return 0;
}
