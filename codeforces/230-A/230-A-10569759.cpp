#include <iostream>
using namespace std;
void insertionSort(int arr[], int arri[], int length) {
      int i, j, tmp, tmpi;
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  
                  tmpi = arri[j];
                  arri[j] = arri[j - 1];
                  arri[j - 1] = tmpi;
                  
                  
                  j--;
            }
      }
}

int main()
{
   int s, n, idx = 0;
   cin >> s >> n;
   int xi[n], yi[n];
   
   for(int i = 0; i < n; i++)
      cin >> xi[i] >> yi[i];
   
   insertionSort(xi,yi,n);
   while(idx < n && s > xi[idx]){
      s += yi[idx];
      idx++;
   }
   
   if(idx == n)
      cout << "YES";
   else
      cout << "NO";
   return 0;
 }