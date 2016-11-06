/* Programming Exercise 5-2 */
#include <stdio.h>
int main(void)
{
    int n,m;
    printf("Enter the vlaue of n:\n");
    scanf("%d",&n);
    m = n+10;
    while(n < m)
    {
        printf("%d\n",n);
        n++;
    }
    printf("%d\n",n);

    return 0;
}
