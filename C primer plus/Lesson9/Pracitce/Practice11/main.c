#include <stdio.h>
int fib(int);
int main(void)
{
    int result;
    result = fib(6);
    printf("fib = %d\n",result);

    return 0;
}

int fib(int n)
{

    if(n <= 1)
        return n;
    else
        return fib(n-1)+fib(n-2);

    //return fib(n);
}
