/* Programming Exercise 7-3 */
#include <stdio.h>
int main(void)
{
    int odd_count = 0;          //ͳ������������
    int even_count = 0;         //ͳ��ż��������
    double odd_total = 0.0;     //ͳ���������ܺ�
    double even_total = 0.0;    //ͳ��ż�����ܺ�
    int figure = 0L;
    printf("Please enter the value(0 to quit): \n");
    scanf("%d",&figure);
    while(figure)
    {
        if(figure%2 == 0)
            {
                even_count++;
                even_total += figure;
            }
        else
            {
                odd_count++;
                odd_total += figure;
            }
        scanf("%d",&figure);
    }
    printf("Number of evens: %d", even_count);
    if (even_count > 0)     //�ж��Ƿ�ż������Ϊ0,�����ĸΪ0���������
        printf(" average: %g", even_total / even_count);
    putchar('\n');

    printf("Number of odds: %d", odd_count);
    if (odd_count > 0)      //�ж��Ƿ���������Ϊ0,�����ĸΪ0���������
        printf(" average: %g", odd_total / odd_count);
    putchar('\n');

    printf("\ndone\n");
    return 0;

}
/*
// Programming Exercise 7-3
#include <stdio.h>
int main(void)
{
    int n;
    double sumeven = 0.0;
    int ct_even = 0;
    double sumodd = 0.0;
    int ct_odd = 0;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        if (n % 2 == 0)
        {
            sumeven += n;
            ++ct_even;
        }
        else // n % 2 is either 1 or -1
        {
            sumodd += n;
            ++ct_odd;
        }
    }
    printf("Number of evens: %d", ct_even);
    if (ct_even > 0)
        printf(" average: %g", sumeven / ct_even);
    putchar('\n');

    printf("Number of odds: %d", ct_odd);
    if (ct_odd > 0)
        printf(" average: %g", sumodd / ct_odd);
    putchar('\n');

    printf("\ndone\n");
    return 0;
}
*/
