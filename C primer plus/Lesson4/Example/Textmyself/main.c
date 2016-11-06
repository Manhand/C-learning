/*Ñ§ÒÔÖÂÓÃ*/
#include <stdio.h>
int main(void)
{
    char name[15];
    float cash = 123.453;

    printf("Please enter your name:\n");
    scanf("%s",name);
    printf("The %s family just may be $%6.2f dollars richer!",name,cash);

    return 0;
}
