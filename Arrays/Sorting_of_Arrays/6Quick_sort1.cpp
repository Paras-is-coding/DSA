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
// Partition in such a way that smaller elements than pivot in left and graater in right 
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;

    //Repeat the proces of swapping until starting and ending index cross each other
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    } while (i < j);

    // swap the pivot with j because j kaa hunxa tha xa last ma tyo hunxa 
    // thikka yek step aagadi rukya hunxa jaa ma a[j]<pivot hunxa i le j lai cross garne betikkai
    swap(&arr[start], &arr[j]);
    return j;
}

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