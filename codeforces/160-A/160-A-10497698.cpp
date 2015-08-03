#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
      int i, j, minIndex, tmp;    
      for (i = 0; i < n - 1; i++) {
            minIndex = i;
            for (j = i + 1; j < n; j++)
                  if (arr[j] < arr[minIndex])
                        minIndex = j;
            if (minIndex != i) {
                  tmp = arr[i];
                  arr[i] = arr[minIndex];
                  arr[minIndex] = tmp;
            }
      }
}

int main()
{
   int n, twinSum, coin = 0, mySum = 0;
   cin >> n;
   int arr[n];
   int idx = n-1;
   
   for(int i = 0; i < n; i++)
      cin >> arr[i];
   selectionSort(arr, n);
      
   while(!(mySum > twinSum)){
   
      mySum += arr[idx];
      twinSum = 0;
      for(int i = 0; i < idx; i++)
         twinSum += arr[i];
      idx--;
      coin++;
   }
   
   cout << coin;
   return 0;
   }