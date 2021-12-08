#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = -n; i <= n; i++)
    {
        for (int j = 0; j < fabs(i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < ((-fabs(i)) + n) * 2 + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}