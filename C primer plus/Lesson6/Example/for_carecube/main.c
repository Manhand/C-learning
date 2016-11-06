/*for_cube.c--更加关心限制立方的大小*/
#include <stdio.h>
int main(void)
{
    int num;
    printf("n     n cubed\n");
    for(num = 1; num*num*num <= 216; num++)
        printf("%d     %d\n",num,num*num*num);

    return 0;
}
