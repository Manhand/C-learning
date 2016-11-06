#include <stdio.h>
#define ROWS 8
#define LINE 4
int main(void)
{
    int index0,index1;
    for(index0 = 0; index0 < LINE; index0++)
    {
        for(index1 = 0; index1 < ROWS; index1++)
            printf("$");
        printf("\n");
    }

    return 0;
}
