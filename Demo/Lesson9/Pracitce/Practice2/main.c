#include <stdio.h>
void chline(char,int,int);
int main(void)
{
    chline('*',3,4);

    return 0;
}

void chline(char ch,int rows,int cols)
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%c",ch);
        putchar('\n');
    }

}
