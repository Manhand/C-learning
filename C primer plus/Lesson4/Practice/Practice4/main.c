/* Programming Exercise 4-4 */
#include <stdio.h>
int main(void)
{
    char name[40];
    float mheight;
    float cmheight;

    printf("Enter your name and cmheight:\n");
    scanf("%s %f",name,&cmheight);
    mheight = cmheight/100;
    printf("%s,you are %0.2f feet tall",name,mheight);

    return 0;
}
