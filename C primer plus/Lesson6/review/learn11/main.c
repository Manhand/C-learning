#include <stdio.h>
#define SIZE 8
int main(void)
{
    int by_two[SIZE];
    int index;

    for(index = 0; index <= SIZE; index++)
        by_two[index] = 2 * (index+1);
    for(index = 1;index <= SIZE; index++)
        printf("%d ",by_two[index-1]);
    printf("\n");

    return 0;
}
