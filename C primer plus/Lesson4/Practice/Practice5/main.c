/* Programming Exercise 4-5 */
#include <stdio.h>
int main(void)
{
    float Mb_S;
    float MB;
    float sec;

    printf("Enter Mb_S and MB:\n");
    scanf("%f%f",&Mb_S,&MB);
    sec = MB/(Mb_S/8.0);
    printf("At %.2f megabits per second,a file of %.2f megabytes \
downloads in %.2f seconds",Mb_S,MB,sec);

    return 0;


}
