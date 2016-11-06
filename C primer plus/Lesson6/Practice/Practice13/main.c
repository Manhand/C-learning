#include <stdio.h>
#define SIZE 8
int main(void)
{

    int i;
    int integer[SIZE];
    integer[0] = 1;
    for(i = 1; i < SIZE; i++)
    {
        integer[i] = integer[i-1]*2;
    }

    i = 0;
    do{
        printf("%d ",integer[i]);
    }while(++i < 8);

    return 0;

}
