#include<iostream>
using namespace std;


int kadane_algo(int arr[], int n)
{
    int max_sum = 0;
    int curr_sum = 0;

    for(int i=0; i<n; i++)
    {
        curr_sum = curr_sum + arr[i];
        if(curr_sum > max_sum)
        {
            max_sum = curr_sum;
        }
        if(curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    return max_sum;
}


int main()
{
    cout<<"Enter size :";
    int n;
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int ans = kadane_algo(arr,n);

    cout<<"The max sum of sub array is : "<<ans<<endl;
    


    return 0;
}