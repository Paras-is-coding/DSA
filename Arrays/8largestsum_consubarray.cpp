#include<iostream>
using namespace std;

int  largest_consubarray_sum(int arr[], int n)
{
    int max_sum = 0, new_sum = 0;

    for(int i=0; i<n; i++)
    {
        new_sum =new_sum + arr[i];
        if(max_sum < new_sum)
        {
            max_sum = new_sum;
        }

        if(new_sum < 0)
        {
            new_sum = 0;
        }
    }

    return max_sum;
}
int main()
{
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;

    int* arr = new int[n];


    cout<<"Enter elements of arr : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = largest_consubarray_sum(arr, n);

    cout<<"The largest contigous subarray sum is : "<<sum;
    return 0;
}