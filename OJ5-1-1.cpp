#include <iostream>
#include <algorithm>
using namespace std;
int j(int a)
{
    if (a==1)
    {
        return 1;
    }
    else
    {
        return j(a-1)*a;
    }
}
int main ()
{
    int b;
    cin>>b;
    cout<<j(b);
}