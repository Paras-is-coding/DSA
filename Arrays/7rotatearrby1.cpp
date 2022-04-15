#include<iostream>
using namespace std;

void rotate_by_one(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

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
    cout<<"Enter size : "<<endl;
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter elements of arr : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    rotate_by_one(arr, n);
    display(arr, n);

    return 0;
}