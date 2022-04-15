// Time complexity of this algorithm is O(n) as it recursively calls function n/2 times

#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    if(start>=end)
    {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse(arr, start+1, end-1);
}


void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter number of elements of array : ";
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    reverse(arr, 0, n-1);
    display(arr, n);
        return 0;
}