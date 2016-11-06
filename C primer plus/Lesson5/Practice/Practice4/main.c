/* Programming Exercise 5-4 */
#include <stdio.h>
#define INCH 2.54               // 1 inch = 2.54cm  1 feet = 12inches
int main(void)
{
    float cm;
    int feet;                  //Ó¢³ß
    float inches;                //Ó¢´ç
    printf("Enter a height in centimeters:");
    scanf("%f",&cm);
    while(cm > 0)
    {
        feet = (int)(cm/INCH/12);
        inches = cm/INCH-(int)(cm/INCH/12)*12;
        printf("%.1f cm = %d feet, %.1f inches\n",cm,feet,inches);
        printf("Enter a height in centimeters(<0 to quit):");
        scanf("%f",&cm);
    }
    printf("bye");

    return 0;
}
