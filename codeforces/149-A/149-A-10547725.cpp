#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
      int i, j, minIndex, tmp;    
      for (i = 0; i < n - 1; i++) {
            minIndex = i;
            for (j = i + 1; j < n; j++)
                  if (arr[j] > arr[minIndex])
                        minIndex = j;
            if (minIndex != i) {
                  tmp = arr[i];
                  arr[i] = arr[minIndex];
                  arr[minIndex] = tmp;
            }
      }
}

const int numMonth = 12;
int main()
{
   int k, idx = 0, grow = 0;
   cin >> k;
   int arr[numMonth];
   for(int i = 0; i < numMonth; i++)
      cin >> arr[i];
   selectionSort(arr, numMonth);
   
   while(idx < numMonth && grow < k ){
      grow += arr[idx];
      idx++;
   }
   
   if(idx == 12 && grow < k)
      cout << -1;
   else
     cout << idx;
   return 0;
 }