/* Programming Exercise 7-9 */
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int limit;
    int num;
    int div;
    bool numIsPrime; // use int if stdbool.h not available
    while(scanf("%d",&limit) == 1 && limit > 0)
    {
        if (limit > 1)
        printf("Here are the prime numbers up through %d\n", limit);
        else
        printf("No primes.\n");
        for(num = 2; num <= limit; num++)
        {
            for(div = 2,numIsPrime = true; div*div <= num; div++)
                if(num%div == 0)
                    numIsPrime = false;
            if(numIsPrime)
                printf("%d is prime.\n", num);
        }
        printf("Enter a positive integer (q to quit): ");
    }
    printf("Done!\n");

    return 0;
}
