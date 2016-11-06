#include <stdio.h>
#define SIZE 6
#define LINE 6
int main(void)
{
    int index;
    int i,j;
    char alphabet[SIZE];

    for(index = 0; index < SIZE; index++)
        scanf("%c",&alphabet[index]);

    for(i = 0; i < LINE; i++)
    {
        for(j = 0; j < i+1; j++)
            printf("%c",alphabet[j]);
        printf("\n");
    }

    return 0;
}
