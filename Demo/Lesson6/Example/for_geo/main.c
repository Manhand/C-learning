/*for_geo.c--让递增量几何增长，而不是算术增长*/
#include <stdio.h>
int main(void)
{
    double debt;
    for(debt = 100.0; debt < 150.0; debt = debt * 1.1)
        printf("Your debt is now $%.2lf.\n",debt);

    return 0;
}
