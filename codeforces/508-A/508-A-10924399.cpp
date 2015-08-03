#include<iostream>
using namespace std;

int main()
{
   int n, m, k, i, j, count = 0;
   bool lost = false;
   cin >> n >> m >> k;
   int arr[n+2][m+2] = {0};

   while(count < k && !lost){
      cin >> i >> j;
      arr[i][j] = 1;
      if(arr[i][j-1] == 1 && arr[i-1][j] == 1 && arr[i-1][j-1] == 1)
          lost = true;
else if(arr[i][j-1] == 1 && arr[i+1][j] == 1 && arr[i+1][j-1] == 1)
          lost = true;
 else if(arr[i][j+1] == 1 && arr[i+1][j] == 1 && arr[i+1][j+1] == 1)
          lost = true;
 else if(arr[i][j+1] == 1 && arr[i-1][j] == 1 && arr[i-1][j+1] ==1)
          lost = true;

       count++;
   } 
   if(lost)
      cout << count;
   else
      cout << "0";
   return 0;
}