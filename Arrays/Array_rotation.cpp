#include<iostream>
using namespace std;

void rotate(int arr[], int d, int n)
{
    int temp;
    for(int i=0; i<d; i++)
    {
        temp = arr[0];
        for(int j = 0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }

    for(int j = 0; j<n; j++)
    {
        cout<< arr[j]<<" ";
    }

    delete[]arr;
    arr = NULL;
}

int main()
{
    int n;
    int d;
    cout << "Enter size of array : ";
    cin >> n;
    
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cout <<"Enter "<<i<<"th element : ";
        cin >> arr[i];
    }
    cout<<endl<<"Enter how many times you want to rotate : ";
    cin >> d;

    rotate(arr, d, n);

    return 0;

}