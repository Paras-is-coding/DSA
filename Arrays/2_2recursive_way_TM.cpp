// This is the iterative approach based on divide and conquer method 

#include<iostream>
using namespace std;

struct paras
{
    int max;
    int min;
};

paras find_min_max(int a[], int start, int end)
{
    paras minmax,mmf,mms;

    if(start == end)
    {
        minmax.max = a[start];
        minmax.min = a[start];
        return minmax;
    }
    if(end == start + 1)
    {
        if(a[start]>a[end])
        {
            minmax.max = a[start];
            minmax.min = a[end];
        }        
        else{
            minmax.max = a[end];
            minmax.min = a[start];
        }
        return minmax;
    }
    
        int mid = (start+end)/2;
        mmf = find_min_max(a,start,mid-1);
        mms = find_min_max(a,mid,end-1);

    if(mmf.max>mms.max)

    {
        minmax.max = mmf.max;
    }
    else{
        minmax.max = mms.max;
    }
    if(mmf.min <mms.min)
    {
        minmax.min = mmf.min;
    }
    else{
        minmax.min = mmf.min;
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

    paras minmax = find_min_max(a,0,n);
    cout<<"The maximum is : "<<minmax.max<<endl;
    cout<<"The minimum is : "<<minmax.min<<endl;
    

    return 0;
}