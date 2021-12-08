#include <stdio.h>
#include <math.h>
int main()
{
int n,l;
scanf("%d",&n);
for ( l=-n; l <= n; l++)
{
    for ( int i = 0; i < fabs(l); i++)
    {
        printf(" ");
    }
    for (int i = 0; i < (-fabs(l)+n)*2+1; i++)
    {
        printf("*");
    }
    printf("\n");
}

}