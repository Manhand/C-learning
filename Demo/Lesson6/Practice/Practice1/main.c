/* pe6-1.c */
/* this implementation assumes the character codes */
/* are sequential, as they are in ASCII. */
#include <stdio.h>
#define SIZE 26
int main(void)
{
    int i,j;
    char alphabet[26];

    for(i = 0; i < SIZE; i++)
        scanf("%c",&alphabet[i]);

    for(j = 0; j < SIZE; j++)
        printf("%c",alphabet[j]);

    return 0;

}
