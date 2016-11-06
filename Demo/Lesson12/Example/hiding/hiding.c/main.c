#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 30;//Ô­Ê¼µÄx

    printf("x in outer block: %d at %p\n",x,&x);
    {
        int x = 77;
        printf("x in inner block: %d at %p\n",x,&x);
    }
    printf("x in outer block: %d at %p\n",x,&x);
    while(x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in outer block: %d at %p\n",x,&x);
    }
    printf("x in outer block: %d at %p\n",x,&x);
}
/*
x in outer block: 30 at 0060FF0C
x in inner block: 77 at 0060FF08
x in outer block: 30 at 0060FF0C
x in outer block: 101 at 0060FF04
x in outer block: 101 at 0060FF04
x in outer block: 101 at 0060FF04
x in outer block: 34 at 0060FF0C
*/
