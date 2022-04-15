#include<iostream>
using namespace std;

int find_possible_jumps(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }

    return find_possible_jumps(n-1) + find_possible_jumps(n-2) + find_possible_jumps(n-3);

}

int main()
{
    cout<<"Enter the number of stairs : ";
    int n;
    cin>>n;

    cout<<"The number of possible ways are : "<<endl;
    cout<<find_possible_jumps(n);

    return 0;
}