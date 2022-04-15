#include<iostream>
using namespace std;


void insertion_sort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j =j-1;
        }
        arr[j+1] = key;
    }
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
    cout<<"Enter size of array: ";
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<" th element : ";
        cin>>arr[i];
    }

    insertion_sort(arr, n);
    display(arr, n);

    return 0;
}