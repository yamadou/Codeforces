#include<iostream>
using namespace std;

int main()
{
   int r, c, count, row = 0, col = 0;
   cin >> r >> c;
   char arr[r][c];
   
   for(int i = 0; i < r; i++){
      count = 0;
      for(int j = 0; j < c; j++){
         cin >> arr[i][j];
         if(arr[i][j] == '.')
            count++;
      }
      if(count == c)
         row++;
   }
   
   for(int j = 0; j < c; j++){
      count = 0;
      for(int i = 0; i < r; i++){
         if(arr[i][j] == '.')
            count++;
      }
      if(count ==  r)
         col++;
   }
   
   cout << ((row*c)+(col*(r-row)));
   return 0;
 }