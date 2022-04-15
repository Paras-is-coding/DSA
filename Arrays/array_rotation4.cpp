// this is efficient algorithm of rotating an array with time complexity of O(n)
#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
}

void rotate(int arr[], int n , int d)
{
    if(d==0)
    return;

    d=d%n;

    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);

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
    int n , d;
    
    cout<<"Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<"th element: ";
        cin >> arr[i];
    }

    cout<<"Enter how many times you want to rotate: ";
    cin >> d;
    rotate(arr, n, d);
    display(arr, n);

    return 0;
}