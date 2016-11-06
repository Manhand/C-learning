/*compare.c--该程序可以正常运行*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>   //strcmp()函数的声明
#define ANSWER "Grant"
#define SIZE 40
char *s_gets(char *st,int size);
void convert(char *arr);
int main(void)
{

    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    convert(try);
    while(strcmp(try,ANSWER))   //与strmp(try,ANSWER) != 0
    {
        puts("No,that's wrong,Try again.");
        s_gets(try,SIZE);
        convert(try);
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char *st,int size)
{
    int i = 0;
    char * ret_val;

    ret_val = fgets(st,size,stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}

void convert(char *arr)
{
    int i = 0;
    while(arr[i++] != '\0')
    {
        if(i > 0)
        {
            if(isupper(arr[i]))
                arr[i] = tolower(arr[i]);
        }
    }
}
