#include <stdio.h>
void Temperatures(double);
int main(void)
{
    double Fahrenheit;

    printf("Enter the Fahrenheit:");
    while(scanf("%lf",&Fahrenheit) == 1)
    {
        Temperatures(Fahrenheit);
        printf("Enter the Fahrenheit:");
    }
    printf("Done!\n");

    return 0;
}

void Temperatures(double F)
{
    const double a=1.8,b=32.0,c=273.16;
    printf("Fahrenheit= %.1f\n",F);
    printf("Celsius=%.1f\n",a*F+b);
    printf("Kelvin= %.1f\n",a*F+b+c);

}
