#include <iostream>
#include <algorithm>
#define P 3.14159
using namespace std;
int main ()
{
    float r,h;
    cin>>r>>h;
    printf("%.3f",P*2*r*r+2*P*r*h);
}