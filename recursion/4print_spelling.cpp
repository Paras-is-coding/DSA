#include<iostream>
using namespace std;

void display_spelling(int n)
{
    string a[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    if(n==0)
    {return;}
    int rem = n%10;
    display_spelling(n/10);
    cout<<a[rem]<< " ";


}
int main()
{
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    display_spelling(n);
    return 0;
}