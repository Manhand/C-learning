/* Programming Exercise 9-3 */
#include <stdio.h>
void chLineRow(char ch, int c, int r);
int main(void)
{
    char ch;
    int col, row;
    printf("Enter a character (# to quit): ");
    while ( (ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        printf("Enter number of columns and number of rows: ");
        if (scanf("%d %d", &col, &row) != 2)
            break;
        chLineRow(ch, col, row);
        printf("\nEnter next character (# to quit): ");
    }
    printf("Bye!\n");
    return 0;
}

// start rows and cols at 0
void chLineRow(char ch, int c, int r)
{
    int col, row;
    for (row = 0; row < r ; row++)
    {
        for (col = 0; col < c; col++)
        putchar(ch);
        putchar('\n');
    }
    return;
}
