#include<iostream>
using namespace std;

int fibanocci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return fibanocci(n-1) + fibanocci(n-2);
}
int main()
{
    cout<<fibanocci(5);
    return 0;
}