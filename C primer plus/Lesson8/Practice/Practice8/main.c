#include <stdio.h>
#include <ctype.h>
void start(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);
int n;
char r;
int main(void)
{
    int ch;

    start();
    while((ch = getchar()) != 'q')
    {
      switch(ch)
        {
            case 'a':add();
                     break;
            case 'b':subtract();
                     break;
            case 'c':multiply();
                     break;
            case 'd':divide();
                     break;
            default:printf("Error,try again!\n");
                     break;
        }
        start();
        while(getchar() != '\n')
            continue;
    }

    return 0;
}



void start(void)
{
    printf("**************************\n");
    printf("a. add         b. subtract\n");
    printf("c. multiply    d. divide\n");
    printf("q. quit\n");
    printf("**************************\n");

}

void add(void)
{
    float num1,num2;
    printf("Enter first number: ");
    while(scanf("%f",&num1) != 1)
    {

        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);

        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    printf("Enter second number: ");
    while(scanf("%f",&num2) != 1)
    {
        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);

        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    printf("%f + %f = %f\n",num1,num2,num1+num2);
}

void subtract(void)
{
    float num1,num2;
    printf("Enter first number: ");

    while(scanf("%f",&num1) != 1)
    {

        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);
        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    printf("Enter second number: ");
    while(scanf("%f",&num2) != 1)
    {
        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);

        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    printf("%f - %f = %f\n",num1,num2,num1-num2);
}

void multiply(void)
{
    float num1,num2;
    printf("Enter first number: ");
    while(scanf("%f",&num1) != 1)
    {

        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);

        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    printf("Enter second number: ");
    while(scanf("%f",&num2) != 1)
    {
        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);

        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    printf("%f * %f = %f\n",num1,num2,num1*num2);
}

void divide(void)
{
    float num1,num2;
    printf("Enter first number: ");
    while( scanf("%f",&num1) != 1)
    {

        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);

        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    printf("Enter second number: ");
    while(scanf("%f",&num2) != 1)
    {

        while ((r = getchar()) != '\n' && r != EOF)
            putchar(r);

        printf(" is not an number.");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
    }
    while(num2==0)
    {
        printf("Enter a number other than 0:");
        scanf("%f",&num2);

        while ((r = getchar()) != '\n' && r != EOF);
    }

    printf("%f / %f = %f\n",num1,num2,num1/num2);
}
