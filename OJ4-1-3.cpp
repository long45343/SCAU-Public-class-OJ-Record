#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        if (a % 27)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}