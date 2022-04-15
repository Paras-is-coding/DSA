// First of all we are returning two values we can do it by declaring structure or using pointer
//This is first method of Simple linear search 
// We declare min and max first two elements and compare rest of them and update minmax

#include<iostream>
using namespace std;

struct paras
{
    int max;
    int min;
};

paras find_max_and_min(int arr[], int n)
{
    struct paras minmax;

    if(n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    if(arr[0]>arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for(int i=2; i<n; i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}


int main()
{
    struct paras minmax;
    int n;
    cout<<"Enter length of array: ";
    cin>>n;

    int* arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    minmax = find_max_and_min(arr, n);
    cout<<"The maximum value is : "<<minmax.max<<endl;
    cout<<"The minimum value is : "<<minmax.min<<endl;

    return 0;
}