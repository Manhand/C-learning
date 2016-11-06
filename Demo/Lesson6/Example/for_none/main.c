/*for_none.c--可以省略一个或多个表达式，但是不可以省略分号*/
/**********************************
*注：省略第二个表达式被视位真,如：
*for(   ;   ;   )
*   printf("I want some action\n");
*该循环会一直运行
**********************************/
#include <stdio.h>
int main(void)
{
    int ans,n;
    ans = 2;
    for(n = 3; ans <= 25;)
        ans = ans * n;
    printf("n = %d;ans = %d.\n",n,ans);

    return 0;
}
