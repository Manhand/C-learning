#include <stdio.h>
void cube(double n);
int main(void)
{
    double value;

    printf("Enter the value:\n");
    scanf("%lf",&value);
    cube(value);

    return 0;
}
void cube(double n)
{
    printf("The cube of the value is %.1f\n",n*n*n);
}
