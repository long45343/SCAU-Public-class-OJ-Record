#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int i, a[200];
    for (int i = 0; i < 200; i++)
    {
        a[i]=1;
    }
    
    for (i = 2; i <= sqrt(200); i++)
    {
        if (a[i])
        {
            for (int j = i+i; j < 200; j += i)
            {
                a[j] = 0;
            }
        }
    }
    for (int i = 2; i < 200; i++)
    {
        if (a[i])
        {
            cout<<i<<endl;
        }
        
    }
    
}