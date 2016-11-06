#include <stdio.h>
#define DNUM 150                //Dunbar's number(邓巴数，社交圈稳定关系成员数量最大值)
int main(void)
{
    int friend_num;
    int week = 1;
    int i;

    printf("Enter the number:");
    scanf("%d",&friend_num);

    while(friend_num < DNUM)
    {
        friend_num = (friend_num - week) * 2;
        printf("Rabnud Doctor have %d friends in %dth week\n",friend_num,week);
        week++;
    }

    printf("Done");

    return 0;
}
