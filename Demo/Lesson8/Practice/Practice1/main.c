/* Programming Exercise 8-1 */
#include <stdio.h>

int main(void)
{
    int ch;
    int ct = 0;
    int enter = 0;
    while ((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            ct -= 1;
        ct++;
    }
    printf("%d characters read\n", ct-enter);

    return 0;
}
