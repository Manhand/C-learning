#include <stdio.h>
#define INIT_AMT 1000000
#define RATE_COMP 0.08
#define PY_COST 100000
int main(void)
{
    int years = 0;
    int fortune = INIT_AMT;
    while(fortune > 0)
    {
        fortune += fortune * RATE_COMP - PY_COST;
        years++;
    }
    printf("%d",years);

    return 0;
}
