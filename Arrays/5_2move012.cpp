#include<iostream>
using namespace std;

void swap(int *a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void move_012_toside(int arr[], int n)
{
    int lo=0;
    int mid=0;
    int high = n-1;

    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:{
                swap(&arr[mid],&arr[lo]);
                lo++;
                mid++;
                break;
            }
            case 1:{
                mid++;
                break;
            }
            case 2:{
                swap(&arr[mid],&arr[high]);
                high--;
                break;
            }
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

    int n;
    cout<<"Enter size : ";
    cin>>n;

    int* arr = new int[n];

    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    move_012_toside(arr,n);
    display(arr,n);    
    return 0;
}