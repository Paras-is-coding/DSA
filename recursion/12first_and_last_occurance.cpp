// IDK why ? last occurence is not running 
#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }
    firstocc(arr, n,i+1,key);  

}


int lastocc(int arr[], int n, int i , int key){

    int restarr = lastocc(arr, n ,i+1,key);

    if(restarr != -1){
        return restarr;
    }

    if(arr[i] == key){
        return i;
    }

    return -1;
}


int main()
{
    int arr[] = {1,2,3,43,4,4,5};

    cout<<firstocc(arr,7,0,4)<<endl;
    cout<<lastocc(arr,7,0,4)<<endl;
    
    

    
    return 0;
}