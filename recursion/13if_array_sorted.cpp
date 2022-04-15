// it will reverse the string 
#include<iostream>
using namespace std;

bool is_array_sorted(int arr[], int n){
    if(n == 1){
        return true;
    }
    bool restarray = is_array_sorted(arr,n-1);
        return ((arr[0]<arr[1]) && restarray);
}
int main()
{
    int a[] = {1,2,2,4};
    cout<<is_array_sorted(a, 4);
    return 0;
}