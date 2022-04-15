#include<iostream>
using namespace std;

int exponent_of2(int n)
{
    if(n==0)
    {
        return 1;
    }
    return 2 * exponent_of2(n-1);
}
int main()
{
    cout<<"Enter power : ";
    int n;
    cin>>n;
    cout<<exponent_of2(n);
    return 0;
}