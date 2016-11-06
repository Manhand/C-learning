#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    unsigned long alcount = 0;    //统计字母个数
    unsigned long vacount = 0;

    while((ch = getchar()) != EOF && !ispunct(ch))
    {
        alcount++;
        if(ch == '\n' || ch == ' ')
        {
            alcount--;
            vacount++;
        }
    }
    printf("The average of these is %f.\n",(float)alcount/vacount);

    return 0;
}
