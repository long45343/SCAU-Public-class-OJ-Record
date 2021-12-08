#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    float a[10], sum;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("%.2f", sum / 10);
}
