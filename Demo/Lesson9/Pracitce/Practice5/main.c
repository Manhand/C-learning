#include <stdio.h>
void larger_of(double * x,double * y);
int main(void)
{
    double x,y;
    printf("Enter two numbers(q to quit): \n");
    while(scanf("%lf %lf",&x,&y) == 2)
    {
        larger_of(&x,&y);
        printf("The modified values are %f and %f.\n", x, y);
        printf("Next two values (q to quit): ");
    }
    printf("Bye!");
    return 0;
}

void larger_of(double * x,double * y)
{
    *x = *y = *x > *y ? *x : *y;
}
