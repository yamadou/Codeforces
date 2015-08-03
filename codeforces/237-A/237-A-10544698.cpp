#include <iostream>
using namespace std;

int main()
{
   int n, c1hr, c1mn, c2hr, c2mn, count = 0, cashes = 1;
   cin >> n;
   
   cin >> c1hr >> c1mn;
   for(int i = 0; i < n-1; i++){
      cin >> c2hr >> c2mn;
      if(c1hr == c2hr && c2mn == c1mn)
         count++;
      if(c1hr == c2hr && c2mn - c1mn == 0 && count >= cashes)
         cashes++;
      if(c1hr != c2hr || c2mn != c1mn)
         count = 0;
      
      c1hr = c2hr;
      c1mn = c2mn;
   }
   cout << cashes;
   return 0;
 }