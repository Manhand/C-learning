/*for_wild.c--第三个表达式可以是任意合法的表达式（更新该表达式的值）*/
#include <stdio.h>
int main(void)
{
    int x;
    int y = 55;

    for(x = 1; y <= 75; y = (++x*5)+50)
        printf("%10d %10d\n",x,y);

    return 0;
}
