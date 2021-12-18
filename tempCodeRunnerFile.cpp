#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
      int a, sum = 0;
      cin >> a;
      for (int i = 1; i <= a; i++)
      {
            if (a % i == 0)
            {
                  sum++;
            }
      }
      cout<<sum;
}