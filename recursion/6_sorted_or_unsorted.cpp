//Using vectors 
#include<iostream>
#include<vector>
using namespace std;

bool sorted_unsorted(vector<int> arr,int index)
{
    if(index>= arr.size())//Here i've used arr.size() because i've used vector and it has size member function buildin
    {
        return true;
    }
    if(arr[index]<arr[index-1])
    {
        return false;
    }

    return sorted_unsorted(arr, index+1);// firstly i"d mistaken here by not writing return
}
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    
    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bool ans = sorted_unsorted(arr,1);
    if(ans)//here by mean if(ans) is if ans is true
    {
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
    return 0;
}