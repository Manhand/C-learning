#include <stdio.h>
#define ROWS 3
#define COLS 5
void store(double ar[],int n);
double max(double ar[ROWS][COLS],int rows);
double average(double *ar,int cols);
double total_Ave(double (*ar)[COLS],int rows);
void showarr(double (*ar)[COLS],int rows);

int main(void)
{
    double stuff[ROWS][COLS];
    int rows;
    for(rows = 0; rows < ROWS; rows++)
    {
        printf("Enter %d numbers for row %d\n", COLS, rows + 1);
        store(stuff[rows],COLS);
    }
    printf("array contents:\n");
    showarr(stuff,ROWS);
    for (rows = 0; rows < ROWS; rows++)
        printf("average value of row %d = %g\n",rows+1,average(stuff[rows],COLS)/COLS);
    printf("average value of all rows = %g\n", total_Ave(stuff,ROWS));
    printf("largest value = %g\n", max(stuff,ROWS));
    return 0;
}

void store(double ar[],int n)
{
    int c;
    for(c = 0; c < n; c++)
    {
        printf("Enter value #%d: ", c + 1);
        scanf("%lf",&ar[c]);
    }
}

void showarr(double (*ar)[COLS],int rows)
{
    int r,c;
    for(r = 0; r < rows; r++)
    {
        for(c = 0; c < COLS; c++)
        {
            printf("%lf ",ar[r][c]);
        }
        putchar('\n');
    }
}

double max(double ar[ROWS][COLS],int rows)
{
    int r,c;
    double max;
    for(r = 0,max = ar[0][0]; r < rows; r++)
    {
        for(c = 0; c < COLS; c++)
        {
            if(max < ar[r][c])
                max = ar[r][c];
        }
    }

    return max;
}

double average(double *ar,int cols)
{
    int c;
    double total = 0;

    for(c = 0; c < cols; c++)
        total += ar[c];
    return total;
}

double total_Ave(double (*ar)[COLS],int rows)
{
    int r;
    double total = 0;
    for(r = 0; r < rows; r++)
    {
        total += average(ar[r],COLS);
    }
    return (total/(rows*COLS));
}
