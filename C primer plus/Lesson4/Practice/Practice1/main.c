/* Programming Exercise 4-1 */
#include <stdio.h>
int main(void)
{
    char fname[40];
    char lname[40];
    printf("Enter your first name: ");
    scanf("%s", fname);
    printf("Enter your last name: ");
    scanf("%s", lname);
    printf("%s,%s\n", lname, fname);
    return 0;
}
