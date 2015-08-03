#include <iostream>
using namespace std;

int main()
{
   int n, d, temp, count = 0;
   cin >> n >> d;
   
   for(int i = 0; i < n; i++){
      cin >> temp;
      count += temp;
   }
   
   if((count + 10*(n-1)) > d)
      cout << -1;
   else{
      d -= count;
      cout << d / 5;
   }
   return 0;
 }