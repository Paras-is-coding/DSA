#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        swap(&arr[min],&arr[i]);
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

    selection_sort(arr,n);
    display(arr, n);

    return 0;
}