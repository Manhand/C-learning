#include <stdio.h>
#define LINE 5
int main(void)
{
    int index,rows;

    for(index = 0; index < LINE; index++)
    {
        for(rows = 0; rows < index + 1; rows++)
            printf("$");
        printf("\n");
    }
}
