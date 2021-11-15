#include <stdio.h>
#include <math.h>
int main ()
{
    int a,temp,b;
    scanf("%d",&a);
    temp=sqrt(a);
    b=temp*temp;
    if (a==b)
    {
        printf("Y");
    }
    else
    {
        printf("N");
    }
}