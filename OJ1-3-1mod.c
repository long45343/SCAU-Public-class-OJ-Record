#include <stdio.h>
int compare(int a,int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",compare(a,b));
}