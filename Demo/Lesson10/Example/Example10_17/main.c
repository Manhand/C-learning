#include "stdio.h"
int main(void)
{
    char ch[11];

    scanf("%[^\n]s",ch);
    printf("%11s\n",ch);

    return 0;
}
