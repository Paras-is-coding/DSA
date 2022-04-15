#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp  = *a;
    *a = *b;
    *b = temp;
}

int merge_sorted_array(int arr1[], int n, int arr2[], int m)
{
    for(int i=m-1; i>=0; i--)
    {
        int j, last = arr1[n-1];
        
        for( j = n-2; j>=0 && arr1[j] > arr2[i]; j--)
        {
            
                arr1[j+1]= arr1[j];
                
        }
        if(arr1[n-1] != last)
        {
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }

    }
        
        
        
}

void display(int arr[] , int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    int arr1[] = {2,5,70,90};
    int arr2[] = {10,20,50,300};

    cout<<"Before merging : "<<endl;
    display(arr1,4);
    display(arr2,4);
    
    merge_sorted_array(arr1,4,arr2,4);

    cout<<"After sorting : "<<endl;
    display(arr1,4);
    display(arr2,4);

    return 0;
}