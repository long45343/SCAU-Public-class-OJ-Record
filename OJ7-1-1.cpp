#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int k=0;
    char b,a[80];
    b=getchar();
    while (b!='\n')
    {
        if (b!='A')
        {
            a[k]=b;
            k++;
        }
        b=getchar();
    }
    a[k]='\0';
    cout<<a;
}