/*retire.c*/
#include <stdio.h>

int main()
{
    int age = 20;
    while(age++ <= 65)
    {
        if((age % 20) == 0)         /*age�ܷ�20����*/
            printf("You are %d.Here is a raise.\n",age);
        if(age = 65)
            printf("You are %d.Here is your gold watch.\n",age);
    }
    return 0;
}
