// Programming Exercise 7-6
#include <stdio.h>
int main(void)
{
    char ch;
    char prev = ' ';   //记录前一个字符
    char pres = ' ';   //记录当前字符
    int count = 0;     //记录出现ei的次数
    while((ch=getchar()) != '#')
    {
        pres = ch;
        if(pres == 'i' && prev == 'e')
        {
            count++;
        }
        prev = ch;
    }
    printf("The times of ei is %d",count);
    return 0;
}
