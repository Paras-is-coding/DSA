#include<iostream>
#include<algorithm>//Algorithm header file to use sort build in function 
using namespace std;

int minimize_max_diff(int arr[], int n, int k)
{
    sort(arr,arr+n);  // Sorting an array by passing starting & end address we want to sort

       // Before addding k to the arrray
    int ans = arr[n-1] - arr[0]; //initial max diff between heights
    int mn = arr[0];             //starting minimum
    int mx = arr[n-1];          //starting maximum



    for(int i=0; i<n-1; i++)    // iterating loop on each element from arr[1] to arr[n-2]
    {
        mn = min(arr[0] +k, arr[i+1] -k); // after adding of sub k to the whole array
        mx = max(arr[n-1] -k,arr[i]+k);   // selecting the max and min element

        if(mn<0){continue;}             // coz min < 0 wil maximize the diff instead ie 5-(-2)
        ans = min(ans, mx-mn); // updating the min max diff by minimum of last ans and current


    }
    return ans;
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number to mimimize : ";
    int k;
    cin>> k;
   
   cout<<"The min max difference is : "<<minimize_max_diff(arr, n, k);
    return 0;
}