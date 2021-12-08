#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char a[1000];
    int sum = 0;
    gets(a);
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == ' ' && a[i + 1] != ' ' || i == 0 && a[0] != ' ')
        {
            sum++;
        }
        i++;
    }
    cout << sum;
}