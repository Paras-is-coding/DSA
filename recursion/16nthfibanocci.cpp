// finding nth fibonacci number 
#include<iostream>
using namespace std;

int fabonacci(int n){
    if(n== 0){
        return 0;
    }
    if(n== 1){
        return 1;
    }

    return fabonacci(n-1) + fabonacci(n-2);
}
int main()
{
    cout<<fabonacci(10);
    return 0;
}