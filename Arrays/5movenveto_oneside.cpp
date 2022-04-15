#include<iostream>
using namespace std;

void move_nve_toside(int arr[], int n)
{
    int j = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            j++;
            swap(arr[i],arr[j]);
            
        }
    }
}
void display(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int * arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    move_nve_toside(arr,n);
    display(arr,n);
    return 0;
}