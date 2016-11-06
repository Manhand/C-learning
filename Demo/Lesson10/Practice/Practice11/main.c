#include <stdio.h>
#define ROWS 3
#define COLS 5
void twice(double (*)[COLS],int );
void display(double (*)[COLS],int);
int main(void)
{
    //double target[ROWS][COLS];
    double source[ROWS][COLS] = {{1,2,3,4,5},
                                {5,4,3,2,1},
                                {1,2,3,4,5},
    };
    printf("The previous numbers:\n");
    display(source,ROWS);
    twice(source,ROWS);
    printf("Now the numbers:\n");
    display(source,ROWS);

    return 0;
}

void twice(double (*arr)[COLS],int rows)
{
    int x,y;
    for(x = 0; x < rows; x++)
    {
        for(y = 0; y < COLS; y++)
            arr[x][y] = 2*arr[x][y];
    }
}

void display(double (*arr)[COLS],int rows)
{
    int x,y;
    for(x = 0; x < rows; x++)
    {
        for(y = 0; y < COLS; y++)
            printf("%7.4lf ",arr[x][y]);
        putchar('\n');
    }
}
