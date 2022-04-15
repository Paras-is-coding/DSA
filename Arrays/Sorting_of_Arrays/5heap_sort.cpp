#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int arr[], int n, int i)
{
  int largest = i; // yeuta largest i rakhe , tesko childs ko index calculate gare
  int l = 2 * i + 1;
  int r = 2 * i + 2;

  if (l < n && arr[l] > arr[largest]) // l<n check garnu ko karan child exit garxa ya nai check garnu ho
  {                                   // GARXA BHANE THULO XA KI NAI TYO NI CHECK GARNE
    largest = l;
  }

  if (r < n && arr[r] > arr[largest])
  {
    largest = r;
  }
  if (i != largest) // IF I INDEX JO DEKO THEW FUN LAI , MODIFIED LARGEST DIFF XA BHANE AARU KAAM GARNE
  {
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest); // Bichar gar aaba largest i rahena l ya r bhaisakew
  }
  }                           // YO RECURSIVE CALL LE MATHI KO ADJUST GARE SI TALA KO NI ADJUST GARXA

  void heap_sort(int arr[], int n)
  {

    for (int i = n / 2 - 1; i >= 0; i--)
    {
      heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {
      swap(&arr[0], &arr[i]);
      heapify(arr, i, 0);
    }
  }

  void display(int arr[], int n)
  {
    for (int i = 0; i < n; i++)
    {
      cout << arr[i]<<" ";
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

    heap_sort(arr, n);
    display(arr, n);

    return 0;
  }