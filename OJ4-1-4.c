#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if (a>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    if (a%2==0)
    {
        printf("\neven");
    }
    else
    {
        printf("\nodd");
    }
    
    
}