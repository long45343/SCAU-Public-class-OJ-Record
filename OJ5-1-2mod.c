#include <stdio.h>
int main()
{
    float a, sum;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%f", &a);
        sum += a;
    }
    printf("%.2f", sum / 10);
}