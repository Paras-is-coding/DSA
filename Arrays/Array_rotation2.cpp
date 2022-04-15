// Now this algorithm has time complexity of O(n*d) and auxiliary space d
// we can also solve this using temp array that stores first d elements
//then shift rest of the array and store back the d elements this will take time complixity of n auxiliary space of d

// best way to solve is juggling algorithm that is in array_rotation method 3
#include<iostream>
using namespace std;

void left_rotate(int arr[], int n , int d)
{
    
    for(int i=0; i<n-1; i++)
    {
        arr[i]= arr[i+1];
    }
    
}

void rotate(int arr[], int n, int d)
{
    for(int j=0; j<d; j++)
    {
        int temp = arr[0];
        left_rotate(arr, n, d);
        arr[n-1] = temp;

    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i];
    }
}



int main()
{
    int n, d;

    cout<<"Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<"th element: ";
        cin >> arr[i];
    }

    cout<<"Enter how many times want to rotate: ";
    cin >> d;
    rotate(arr, n, d);
    display(arr, n);

    return 0;
}