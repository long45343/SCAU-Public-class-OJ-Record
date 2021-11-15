#include <stdio.h>
int main()
{
    int i, a;
    scanf("%d", &a);
for ( i = 0; a >= 1; i++)
{
    a/=10;
}
    printf("%d", i);  
}