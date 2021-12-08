#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    cin >> a;
    b=sqrt(a);
    if (b*b == a)
    {
        cout << "Y";
    }
    else
        cout << "N";
}