/*lethed2.c*/
#include <stdio.h>
#include <string.h>           //位strlen()提供函数原型
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megbuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch,int num);

int main(void)
{
    int spaces;

    show_n_char('*',WIDTH);
    putchar('\n');
    show_n_char(SPACE,12);
    printf("%s\n",NAME);
    spaces = (WIDTH - strlen(ADDRESS))/2;

    show_n_char(SPACE,spaces);
    printf("%s\n",ADDRESS);
    show_n_char(SPACE,(WIDTH - strlen(PLACE))/2);
    printf("%s\n",PLACE);
    show_n_char('*',WIDTH);
    return 0;
}

void show_n_char(char ch,int num)
{
    int i;
    for(i = 1; i <= num; i++)
        putchar(ch);
}
