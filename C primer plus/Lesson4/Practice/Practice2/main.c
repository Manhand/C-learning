/*Programming Exercise 4-2*/
#include <stdio.h>
int main(void)
{
    char fname[40];
    char lname[40];

    printf("Enter your first name:\n");
    scanf("%s",fname);
    printf("Enter your last name:\n");
    scanf("%s",lname);
    printf("\"%s%s\"\n",lname,fname);
    printf("\"%18s%s\"\n",lname,fname);
    printf("\"%s%-19s\"\n",lname,fname);
    printf("\"%s%-5s\"\n",lname,fname);

    return 0;

}
