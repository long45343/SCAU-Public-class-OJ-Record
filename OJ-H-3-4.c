#include <stdio.h>
#include <math.h>
void swap(float *a, float *b)
{
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    float a[10], min;
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    min=fabs(a[0]-a[1]);
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (fabs(a[i] - a[j])<min)
            {
                min=fabs(a[i] - a[j]);
            }
        }
    }
    printf("%.2f", min);
}