#include <stdio.h>
#define MESG "COMPUTER BYTES DOG"
int main(void)
{
    int n = 0;

    while(n < 5)
    {
        printf("%s\n",MESG);
        n++;
    }
    printf("That's all.\n");

    return 0;
}
