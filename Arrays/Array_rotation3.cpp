#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

void juggling_rotation (int arr[], int d , int n)
{
    d = d%n;
    int g_c_d = gcd(d, n);

    for(int i=0; i<g_c_d; i++)
    {
        int temp = arr[i];
        int j= i;

        while(1)
        {
            int k = j+d;

            if(k>n)
            {
                k = k-n;
            }
            if(k == i)
            {
                break;
            }

            arr[j] = arr[k];
            j=k;
        }
        arr[j] = temp;

            }
}


void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n,d;
    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter times want to rotate : ";
    cin>>d;

    int* arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<"th element : ";
        cin>>arr[i];
    }

    juggling_rotation(arr,d,n);
    display(arr,n);

    return 0;
}