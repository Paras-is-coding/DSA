#include<iostream>
#include<algorithm>
using namespace std;

int find_duplicates(int arr[], int n)
{
    int duplicates =0;
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i] == arr [i+1])
        {
            duplicates ++;
        }
    }

    return duplicates;
    

}
int main()
{

    int arr[] = {1,1,1,4,5,6,6,5,7,7};
    int n= sizeof(arr)/sizeof(arr[0]);

    int d = find_duplicates(arr,n);
    cout<<"The total duplicates are : "<<d;
    return 0;
}