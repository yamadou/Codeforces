#include<iostream>
using namespace std;

int main()
{
   int n, m, x, y;
   cin >> n ;
   int arr[n] = {0};
   
   for(int i = 0; i < n; i++)
      cin >> arr[i];
    
   cin >> m;
   for(int i = 0; i < m; i++){
      cin >> x >> y;
      x--;
      
      if((x-1) >= 0)
         arr[x-1] += (y - 1);
      if((x+1) < n)
         arr[x+1] += (arr[x] - y);
      arr[x] = 0;
   }
   
   for(int i = 0; i < n; i++)
      cout << arr[i] << endl;
   return 0;
}