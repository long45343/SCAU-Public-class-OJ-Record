#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << "positive\n";
    }
    else
        cout << "negative\n";
    if (a % 2)
    {
        cout << "odd";
    }
    else
        cout << "even";
}