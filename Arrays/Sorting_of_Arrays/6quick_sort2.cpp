#include <iostream>
using namespace std;
// This is the function to swap 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// This is the function to partition array and return partitioned index 
// yo function ma partition garne for loop bata jo ma hami greater element pointer rakhxau

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start-1;

//Yo function le i lai tab matra badaunxa jab arr[j] less hos pivot vanda soo that 
// i index samma ko elements haru pivot vanda sano hos (arr[j] lai arr[i] ssanga swap garera)

    for(int j=start; j<end; j++){
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }           
    }
// at the end i+1 index ko element lai pivot sanga swap garxa(return ni garxa i+1 index)
     swap(&arr[i+1],&arr[end]);
     return (i+1);
        
}
s

void quick_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pi = partition(arr, start, end);
        quick_sort(arr, start, pi - 1);
        quick_sort(arr, pi + 1, end);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);
    display(arr, n);

    return 0;
}