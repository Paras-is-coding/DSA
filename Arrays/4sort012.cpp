#include<iostream>
using namespace std;

void sort012(int arr[],int n)
{
    int z=0,o=0,t=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] ==0)
        {
            z++;
        }
        else if(arr[i] ==1)
        {
            o++;
        }
        else{
            t++;
        }
        
        
    }
    
    int i=0;
    while(z>0)
    {
        arr[i] = 0;
        z--;
        i++;
    }
    while(o>0)
    {
        arr[i] = 1;
        o--;
        i++;
    }
    while(t>0)
    {
        arr[i] = 2;
        t--;
        i++;
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

    int * arr = new int[n];

    

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort012(arr, n);

    display(arr,n);
    return 0;
}