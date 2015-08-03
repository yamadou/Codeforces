#include<iostream>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   int arr2[m], arr[n] = {0}; 

   for(int i = 0; i < m; i++)
      cin >> arr2[i];
   
   for(int i = 0; i < m; i++){
      for(int j = arr2[i] - 1; j < n; j++){
         if(arr[j] == 0)
            arr[j] = arr2[i];
      }
   }
   
   for(int i = 0; i < n; i++)
      cout << arr[i] << " ";
   return 0;
}