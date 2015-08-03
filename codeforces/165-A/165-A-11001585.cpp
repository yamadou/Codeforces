#include<iostream>
using namespace std;

int main()
{
   int n, x, y, lft, right, lower, upper, count = 0;
   cin >> n;
   int arr[n][2];
   
   for(int i = 0; i < n; i++){
      for(int j = 0; j < 2; j++)
         cin >> arr[i][j];
   }
   
   for(int i = 0; i < n; i++){
      lft = 0; right = 0; lower = 0; upper = 0;
      x = arr[i][0]; y = arr[i][1];

      for(int j = 0; j < n; j++){
         if(arr[j][0] > x && arr[j][1] == y)
            right++;
         else if(arr[j][0] < x && arr[j][1] == y)
            lft++;
         else if(arr[j][0] == x && arr[j][1] > y)
            upper++;
         else if(arr[j][0] == x && arr[j][1] < y)
            lower++;
          
       }
 
       if(lower != 0 && upper != 0 && right != 0 && lft != 0)
          count++;
   }
   
   cout << count;
   return 0;
}