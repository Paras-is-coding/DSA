#include<iostream>
using namespace std;

int factorial(int n){
    if(n== 0){
        return 1;
    }

    int prev = factorial(n-1);
    return n*prev;
}
int main()
{
    cout<<factorial(4);
    return 0;
}