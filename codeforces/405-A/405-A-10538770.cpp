#include <iostream>
using namespace std;

void insertionSort(int arr[], int length) {
      int i, j, tmp;
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
            }
      }
}
int main()
{
   int n;
   cin >> n;
   int arr[n];
   
   for(int i = 0; i < n; i++)
     cin >> arr[i];
     
  insertionSort(arr, n);
  for(int i = 0; i < n; i++)
     cout << arr[i] << " ";
  return 0;
}