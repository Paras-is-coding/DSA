#include<iostream>
using namespace std;

void recursive(int n)
{
    if(n==0)
    {
        return;
    }
    recursive(n-1);
    cout<<n;
}
int main()
{
    int n=5;
    recursive(n);
    return 0;
}