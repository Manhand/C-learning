#include <stdio.h>
int main(void)
{
    char s = 'A';
    int i,j;
    for(i = 1; s <= 'U'; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c",s);
            s++;
        }

        printf("\n");

    }



    return 0;

}
