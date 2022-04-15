#include<iostream>
using namespace std;
int power(int a, int b){
    if(b == 0){
        return 1;
    }
    int prev = power(a, b-1);
    return a*prev;
}
int main()
{
    cout<<power(2,3);
    return 0;
}