int firstocc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }
    firstocc(arr, n,i+1,key);  

}