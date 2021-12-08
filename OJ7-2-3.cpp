#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[20], b[20000] = {0}, sum = 0;
    for (int i = 0; i < 20; i++)
    {
        cin >> a[i];
        b[a[i]] = 1;
    }
    sort(b, b + 20000);
    for (int i = 19999; i >= 0; i--)
    {
        if (!b[i])
        {
            break;
        }
        sum++;
    }
    cout << sum;
}