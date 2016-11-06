/*moduli.c--ÇóÄ£ÔËËã*/
#include <stdio.h>
int main(void)
{
    int secoperand,firoperand;

    secoperand = firoperand = 0;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&secoperand);
    printf("Now enter the first operand:");
    scanf("%d",&firoperand);
    //printf("%d %% %d is %d\n",firoperand,secoperand,firoperand%secoperand);
    //printf("Enter next number for first operand(<=0 to quit):");

    while(firoperand > 0)
    {
        //scanf("%d",&secoperand);
        printf("%d %% %d is %d\n",firoperand,secoperand,firoperand%secoperand);
        printf("Enter next number for first operand(<=0 to quit):");
        scanf("%d",&firoperand);
    }
    printf("Done!");

    return 0;
}
