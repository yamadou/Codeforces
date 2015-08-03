#include<iostream>
using namespace std;

int main()
{
   int n, col, idx = 1, row = 0;
   char tp, tp2;
   cin >> n;
   bool x = true;
   char arr[n][n];

   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++) 
         cin >> arr[i][j];
   }
    tp = arr[n/2][n/2];
    tp = arr[n/2][n/2];
   while(idx <= n/2 && x){
      if(arr[n/2-idx][n/2-idx] != tp || arr[n/2+idx][n/2+idx] !=tp  ||arr[n/2-idx][n/2+idx] != tp || arr[n/2+idx][n/2-idx] != tp)
         x = false;
      idx++;
   }
   
   arr[n/2][n/2] = ' ';
   idx = 1;
   while(idx <= n/2 && x){
      arr[n/2-idx][n/2-idx] = ' ';
      arr[n/2+idx][n/2+idx] = ' ';   
      arr[n/2-idx][n/2+idx] = ' '; 
      arr[n/2+idx][n/2-idx] = ' ';
      idx++;
   }

   tp2 = arr[0][1];
   while(row < n && x){
      col = 0;
      while(col < n && x){
         if((arr[row][col] != tp2 && arr[row][col] != ' ') || tp == tp2)
            x = false;
        col++;
     }
    row++;
  }
 
   if(x)
      cout << "YES";
   else 
     cout << "NO";
   return 0;
}