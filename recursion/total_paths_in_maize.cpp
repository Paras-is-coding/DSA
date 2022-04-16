#include<iostream>
using namespace std;

int count_paths(int i, int j, int n , int m){

    // when we reach end now dont move 
    if(i == n-1 && j == n-1){
        return 1;
    }

    // if we reach boundary... no path available
    if(i== n || j == m){
        return 0;
    }
    // move downwards
    int downpaths = count_paths(i+1,j,n,m);
    // move right
    int rightpaths = count_paths(i, j+1, n,m);

    return downpaths + rightpaths;
}

int main()
{
    int n=3,m=3;

    cout<<count_paths(0,0,n,m);
    return 0;
}