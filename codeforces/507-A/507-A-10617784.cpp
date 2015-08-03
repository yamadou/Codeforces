#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
      int i, j, minIndex, tmp, k = 0;    
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
   int n, k, l = 0, days = 0, instru = 0;
   cin >> n >> k;
   int arr[n], idx[n], x[n];
   
   for(int i = 0; i < n; i++){
      cin >> arr[i];
      idx[i] = arr[i];
   }
   
   selectionSort(arr, n);
    l = 0;
   while(l < n && days + arr[l] <= k){
      days += arr[l];
      instru++;
      l++;
   }
   
   for(int i = 0; i < n; i++){
      l = 0;
      while(l < n && idx[l] != arr[i])
         l++;
      idx[l] = 0;
      x[i] = l;
   }
    
   cout << instru << endl;
   for(int i = 0; i < instru; i++)
      cout << x[i]+1 << " ";
   
  return 0;
 }