#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b;
    scanf("%f,%f",&a,&b);
    if (fabs(a*a+b*b-1)<0.001)
    {
       printf("Y");
    }
    else
    {
        printf("N");
    }
    
}