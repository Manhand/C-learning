/*join_chk.c--拼接两个字符串，检查第一个数组的大小*/
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char *st,int n);
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    s_gets(flower,SIZE);
    if(strlen(flower)+strlen(addon) <= SIZE)
        strcat(flower,addon);
    puts(flower);
    puts("What is your favorite bug?");
    s_gets(bug,BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;   //计算数组bug剩余空间
    strncat(bug,addon,available);
    puts(bug);

    return 0;

}

char * s_gets(char *st,int size)
{
    int i = 0;
    char *ret_val;

    ret_val = fgets(st,size,stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')     //跳过余下所有字符
                continue;
    }

    return ret_val;
}

