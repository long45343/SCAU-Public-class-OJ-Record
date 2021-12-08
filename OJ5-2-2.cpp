#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double a1 = 2, a2 = 3, b1 = 1, b2 = 2, t1, t2, sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += a1 / b1;
        t1 = a2;
        a2 = a2 + a1;
        a1 = t1;
        t2 = b2;
        b2 = b2 + b1;
        b1 = t2;
    }
    cout<<sum;
}