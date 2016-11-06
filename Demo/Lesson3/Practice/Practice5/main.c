/* Programming Exercise 3-4 */
#include <stdio.h>
int main(void)
{
    int age;
    float i_sec = 3.256e7;
    printf("Please enter your age:");
    scanf("%d",&age);
    printf("The second of your year is %f\n",age*i_sec);

    return 0;
}
