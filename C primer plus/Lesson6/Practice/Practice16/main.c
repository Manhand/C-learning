/* pe6-16.c */
#include <stdio.h>
#define RATE_SIMP 0.10
#define RATE_COMP 0.05
#define INIT_AMT 100.0
int main(void)
{
    double daphne = INIT_AMT;
    double deidre = INIT_AMT;
    int years = 0;
    while( daphne >= deidre)
    {
        daphne += INIT_AMT * RATE_SIMP;
        deidre += deidre * RATE_COMP;
        years++;
    }
    printf("Investment values after %d years:\n", years);
    printf("Daphne: $%.2f\n", daphne);
    printf("Deidre: $%.2f\n", deidre);

    return 0;

}
