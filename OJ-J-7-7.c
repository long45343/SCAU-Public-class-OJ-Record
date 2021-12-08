#include <stdio.h>

void average(double a[][5], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }
        printf("%.2lf ", sum / 5);
        sum = 0;
    }
    printf("\n");
}
void average2(double a[][5], int n)
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        printf("%.2lf ", sum / n);
        sum = 0;
    }
    printf("\n");
}
void top(double a[][5], int n)
{
    double max;
    for (int i = 0; i < 5; i++)
    {
        max=0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i]>max)
            {
                max=a[j][i];
            }
        }
        printf("%.2lf ", max);
    }
}
int main()
{
    double a[10][5];
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", &a[i][j]);
    average(a, 10);
    average2(a, 10);
    top(a, 10);
    return 0;
}