#include<iostream>
using namespace std;

void union_of_sorted_arrayset(int arr1[], int arr2[], int m, int n)
{
    int i =0, j= 0;
    while(i<m && j<n)
    {
        if(arr1[i] <arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else if (arr2[j] < arr1[i])
        {
            cout<<arr2[j++]<<" ";
        }
        else{
            cout<< arr2[j++]<<" ";
            i++;
        }
    }

    while(i<m)
    {
        cout<<arr1[i++]<<" ";
    }
    while(j<n)
    {
        cout<<arr2[j++]<<" ";
    }
}

int main()
{
    int m,n;
    cout<<"Enter size of arr1 and arr2 : "<<endl;
    cin>>m;
    cin>>n;

    int *arr1 = new int[m];
    int *arr2 = new int[n];

    cout<<"Enter elements of arr1 : "<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter elements of arr1 : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }

    union_of_sorted_arrayset(arr1,arr2,m,n);

    return 0;
}