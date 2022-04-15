// Divide and conquer way to sort array using merge sort

#include<iostream>
using namespace std;

//function to merge the divided array
void merge(int arr[], int l, int m, int r)
{
    //Initializing the temp arrays and their size
    int sl = m-l+1;
    int sr = r-m;

    int *larr = new int[sl];
    int *rarr = new int [sr];

    // Inserting the elements to temp arrays from received array
    for(int i=0; i<sl; i++)
    {
        larr[i] = arr[l+i];
    }
    for(int j=0; j<sr; j++)
    {
        rarr[j] = arr[m+1+j];
    }

    // Initializing starting index of all three arrays and storing elements in arr array 
    // from temp arrays in sorted format
    int sil = 0, sir = 0, sim = l;
    while(sil<sl && sir<sr)
    {
        if(larr[sil]<=rarr[sir])
        {
            arr[sim] = larr[sil];
            sil++;
            sim++;
        }
        else
        {
            arr[sim] = rarr[sir];
            sir++;
            sim++;
        }
    }
    
    //storing the remaining elements
    while(sil < sl)
    {
        arr[sim] = larr[sil];
        sim++;
        sil++;
    }
    while(sir < sr)
    {
        arr[sim] = rarr[sir];
        sim++;
        sir++;
    }
}

//Function to divide the array into two halves until size becomes 1
// This function recursively calls itself to divide array and also calls merge function
void merge_sort(int arr[], int l, int r)
{
    if(l>=r)
    {
        return;
    }

    int m = (l+r)/2;

    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);

    merge(arr,l,m,r);

}

//Simple function to display array elements anytime
void display(int arr[], int n)
{
    cout<<"Displaying the elements of array :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Main function
int main()
{
    //Dynamic array initialization
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter "<<n<<" elemtnts of the array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //Function call to sort and display array.
    merge_sort(arr,0,n-1);
    display(arr,n);

    return 0;
}