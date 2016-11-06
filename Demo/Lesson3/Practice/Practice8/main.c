/* Programming Exercise 3-8 */
#include <stdio.h>
int main(void)
{
    float ptuo,bei,ansi,tshao,cshao;
    printf("Please enter the value of bei:");
    scanf("%f",&bei);
    ptuo = 0.5*bei;
    ansi = 8*bei;
    tshao = ansi*2;
    cshao = 3*tshao;
    printf("%f bei equals of %f ptuo\n",bei,ptuo);
    printf("%f bei equals of %f ansi\n",bei,ansi);
    printf("%f bei equals of %f tshao\n",bei,tshao);
    printf("%f bei equals of %f cshao\n",bei,cshao);

    return 0;
}
