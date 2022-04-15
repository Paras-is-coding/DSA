#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n)
{
    bool swapped = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false)
        {
            break;
        }
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

    bubble_sort(arr,n);
    display(arr, n);
    return 0;
}