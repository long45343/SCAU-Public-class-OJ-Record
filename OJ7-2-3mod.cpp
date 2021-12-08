#include <iostream>
#include <algorithm>
int main()
{
    int a[20], b[20000] = {0}, sum = 0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&a[i]);
        b[a[i]] = 1;
    }
    for (int i = 0; i < 20000; i++)
    {
        if (b[i])
        {
            sum++;
        }
    }
    printf("%d",sum);
}