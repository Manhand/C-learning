/*getsputs.c--使用gets()和puts()*/
#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];

    puts("Enter a string,please.");
    gets(words);             //典型用法
    printf("Your string twice:\n");
    printf("%s\n",words);    //效果相同
    puts(words);             //同上
    puts("Done.");

    return 0;
}
