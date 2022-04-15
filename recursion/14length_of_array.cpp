#include<iostream>
using namespace std;

int length(int arr[], int s){
    if(s < 1){
        return 0;
    }
    int len = 1 + length(arr, s-1);
}
int main()
{
    int arr[] = {3,5,4,5,6,7};
    cout<<length(arr,6);

    return 0;
}