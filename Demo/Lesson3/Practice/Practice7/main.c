/* Programming Exercise 3-7 */
#include <stdio.h>
int main(void)
{
    float inch;
    float p_cm = 2.54;
    printf("Please enter your height:");
    scanf("%f",&inch);
    printf("The height of you is %f\n",p_cm*inch);

    return 0;
}
