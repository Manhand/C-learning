#include <stdio.h>
void br();
void ic();
int main(void)
{
    br();
    ic();
    ic();
    br();
    return 0;
}

void br()
{
    printf("Brazil,Russia,");
}

void ic()
{
    printf("India,China\n");
}
