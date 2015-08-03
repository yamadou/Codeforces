#include <iostream>
using namespace std;

int main()
{
   int n, max = 1; 
   cin >> n;
   int arr[n][n];
   
   if( n > 1){
   for(int i = 0; i < n; i++){
      arr[0][i] = 1;
      arr[i][0] = 1;
   }
   
   for(int i = 1; i < n; i++){
      for(int j = 1; j < n; j++){
         arr[i][j] = arr[i-1][j] + arr[i][j-1];
         if(arr[i][j] > max)
            max = arr[i][j];
       }
    }
    }
    cout << max;
    return 0;
   }