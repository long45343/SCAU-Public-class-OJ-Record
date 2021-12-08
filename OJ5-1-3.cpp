#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char a;
    int sum = 0;
    a = getchar();
    while (a != '\n')
    {
        if (a >= '0' && a <= '9')
        {
            sum += (int)a - '0';
        }
        a = getchar();
    }
    cout << sum;
}