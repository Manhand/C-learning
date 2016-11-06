/* Programming Exercise 4-6 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char fname[40];
    char lname[40];
    int i,j;
    printf("Enter your fname:\n");
    scanf("%s",fname);
    printf("Enter your lname:\n");
    scanf("%s",lname);
    i = strlen(lname);
    j = strlen(fname);
    printf("%s %s\n",lname,fname);
    printf("%*d %*d\n",i,i,j,j);
    printf("%-*d %-*d\n",i,i,j,j);

    return 0;
}
