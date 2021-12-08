#include <iostream>
using namespace std;
int main ()
{
    int a,sum=0;
    cin>>a;
    while (a>0)
    {
        a/=10;
        sum++;
    }
    cout<<sum;
}