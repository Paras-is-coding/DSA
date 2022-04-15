// Here ive used insertion sort algo so time complexity will be O(n2)
//We can use merge sort method to reduce time complexity
// we can use heap method also

#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j =j-1;
        }
        arr[j+1] = key;
    }
}
 
struct paras{
    int max;
    int min;
};

paras kth_maxmin(int a[], int n, int k)
{
    paras maxmin;
    insertion_sort(a,n); 
    maxmin.min = a[k-1];
    maxmin.max = a[n-k];

    return maxmin;


}

int main()
{
    cout<<"Enter size : ";
    int n;
    cin>>n;

    int  *arr = new int(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<" th element : ";
        cin>>arr[i];
    }

    cout<<"Enter the index : ";
    int k;
    cin>>k;


    paras minmax = kth_maxmin(arr,n,k);

    cout<<"The "<<k<<"th max is: "<<minmax.max<<endl;
    cout<<"The "<<k<<"th min is: "<<minmax.min;

    return 0;
}