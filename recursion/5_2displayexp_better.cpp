// THis algo takes comparitively less time O(log n) than another one 
#include<iostream>
using namespace std;

int displayexp(int n)
{
    if(n==0)
    {
        return 1;
    }
    int small_ans = displayexp(n/2);
    if(n&1)//here n is being anded to 1 ie if n is odd odd & n will give 1 
    {
        return 2*small_ans *small_ans;
    }
    else{
        return small_ans *small_ans;
    }
}
int main()
{
    cout<<displayexp(4);
    return 0;
}