/* Programming Exercise 5-3 */
#include <stdio.h>
int main(void)
{
    const int D_PER_W = 7;
    int days,dayss,weeks;
    printf("Enter the dayss:\n");
    scanf("%d",&dayss);
    while(dayss > 0)
    {
        weeks =dayss/D_PER_W;
        days = dayss%D_PER_W;
        printf("%d days are %d weeks,%d days\n",dayss,weeks,days);
        printf("Enter the number of days (0 or less to end): \n");
        scanf("%d",&dayss);
    }
    printf("Error\n");

    return 0;
}
