/* Programming Exercise 7-5 */
#include <stdio.h>
int main(void)
{
    char ch;
    int ct1 = 0;
    int ct2 = 0;
    while((ch=getchar()) != '#')
    {
        switch(ch)
        {
            case '.':ct1++;
                     putchar('!');
                     break;
            case '!':ct2++;
                     putchar('!');
                     putchar('!');
                     break;
            default:putchar(ch);
        }
    }

    printf("%d replacement(s) of . with !\n", ct1);
    printf("%d replacement(s) of ! with !!\n", ct2);

    return 0;
}
