/*BOOK.c--打印书本信息*/
#include <stdio.h>
#define BOOK "War and Peace"
int main(void)
{
    float cost = 12.99;
    float percent = 80.0;

    printf("This copy of \"%s\" sells for $%0.2f.\n",BOOK,cost);
    printf("That is %0.0f%% of list.",percent);

    return 0;
}
