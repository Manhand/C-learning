#include <stdio.h>
int main(void)
{
    char ch;
    int lc = 0; //统计小写字母
    int uc = 0; //统计大写字母
    int oc = 0; //统计其他字母
    printf("Please enter the sentence:");
    while((ch = getchar()) != '#')
    {
        if(ch >= 'a' && ch <= 'z')
            lc++;
        else if(ch >= 'A' && ch <= 'Z')
            uc++;
        else
            oc++;
    }
    printf("%d lowercase,%d uppercase,%d other",lc,uc,oc);

    return 0;
}
