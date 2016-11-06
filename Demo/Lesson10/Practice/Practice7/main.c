#include <stdio.h>
#define ROW 3
#define COL 4
void show_arr(int ,int ,double [*][*]);
void copy_ptr(int ,int ,double [*][*],double [*][*]);
int main(void)
{
    double target[ROW][COL];
    double source[ROW][COL] = {{1.0,2.0,3.0,4.0},
                              {5.0,6.0,7.0,8.0},
                              {9.0,10.0,11.0,12.0},
    };
    copy_ptr(ROW,COL,target,source);
    show_arr(ROW,COL,target);

    return 0;
}

void copy_ptr(int rows,int cols,double target[rows][cols],double source[rows][cols])
{
    int c,r;

    for(r = 0; r < rows; r++)
    {
        for(c = 0; c < cols; c++)
            target[r][c] = source[r][c];
    }
}

void show_arr(int rows,int cols,double target[rows][cols])
{
    int c,r;

    for(r = 0; r < rows; r++)
    {
        for(c = 0; c < cols; c++)
            printf("%8.4lf ",target[r][c]);
        putchar('\n');
    }
}
