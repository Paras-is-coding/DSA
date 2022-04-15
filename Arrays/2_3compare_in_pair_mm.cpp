// In this method we compare in pairs based on even and odd pair differently
#include<iostream>
using namespace std;

struct paras
{
    int max;
    int min;
};

paras find_min_max(int a[], int n)
{
    paras minmax;
    int i;

    if(n%2 == 0)
    {
        if(a[0]>a[1])
        {
            minmax.max = a[0];
            minmax.min = a[1];
        }
        else{
            minmax.max = a[1];
            minmax.min = a[0];
        }
        i = 2;       
    }
    else{
        minmax.max = a[0];
        minmax.min = a[0];
        i = 1;
    }

    while(i<n-1)
    {
        if(a[i]>a[i+1])
        {
            if(a[i]>minmax.max)
            {
                minmax.min = a[i];
            }
            if(a[i+1]<minmax.min)
            {
                minmax.min = a[i+1];
            }
        }
        if(a[i]<a[i+1])
        {
            if(a[i]<minmax.min)
            {
                minmax.min = a[i];
            }
            if(a[i+1]> minmax.max)
            {
                minmax.max = a[i+1];
            }
        }
        i +=2;
    }

    return minmax;
}
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int* a = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    paras minmax = find_min_max(a, n);
    cout<<"The maximum is : "<<minmax.max<<endl;
    cout<<"The minimum is : "<<minmax.min<<endl;
    

    return 0;
}