#include <stdio.h>
#define SIZE 8
int main(void)
{
    int i,j,sum;
    int sz1[SIZE];
    int sz2[SIZE];

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d",&sz1[i]);
    }

   /*
    sz2[0] = sz1[0];
    for(j = 1; j < SIZE; j++)
    {
        sz2[j] = sz2[j-1]+sz1[j];
    }
   */
    for(i = 0; i < SIZE ; i++)
    {
        sum = sz1[0];
        for(j = 1; j < i+1; j++)
        {
            sum = sum +sz1[j];
        }
        sz2[i] = sum;
    }

    for(i = 0; i < SIZE; i++)
    {
        printf("%4d ",sz1[i]);
    }

    printf("\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%4d ",sz2[i]);

    }
    return 0;
}
