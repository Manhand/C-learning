/* Programming Exercise 7-4 */
#include <stdio.h>
int main(void)
{
    char ch;
    int count1 = 0,count2 = 0;
    while((ch=getchar()) != '#')
    {
        if(ch == '.')
        {
            ch = '!';
            count1++;
        }
        if(ch == '!')
        {
            putchar(ch);
            putchar(ch );
            count2++;
        }
        else
            putchar(ch);
        putchar('\n');
    }
    printf("replace1 : %d   replace2 : %d",count1,count2);
    return 0;
}
