#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cout<<*min_element(a,a+10);
}