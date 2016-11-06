/* Programming Exercise 4-8 */
#include <stdio.h>
#define GALLON 3.785
#define KILME 1609
int main(void)
{
    float gas,mileage,midvalue1,midvalue2;

    printf("Enter the gas and the mileage:\n");
    scanf("%f%f",&gas,&mileage);
    midvalue1 = mileage/gas;
    printf("%.1f\n",midvalue1);
    midvalue2 = (KILME/GALLON)*100;
    printf("%.1f\n",midvalue2);

    return 0;
}
