/*��ӡ��������֮����������˻��Ľ��*/
#include <stdio.h>
float calculator(float x,float y);
int main(void)
{
    float n1,n2;            //��������������

    printf("Please enter two float value:");
    while(scanf("%f %f",&n1,&n2) == 2)
    {

        printf("%f\n",calculator(n1,n2));
    }

    printf("error!");

    return 0;
}

float calculator(float x,float y)
{
    return (x-y)/(x*y);
}
