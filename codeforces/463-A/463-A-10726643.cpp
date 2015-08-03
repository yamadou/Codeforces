#include<iostream>
using namespace std;

int main()
{
   int n, s, dol, cents, max = -1;
   cin >> n >> s;
   
   for(int i = 0; i < n; i++){
      cin >> dol >> cents;
      if(dol <= s && cents == 0 && max < 0)
         max = 0;
      if( dol < s && (100 - cents) > max && cents != 0)
         max = 100 - cents;
   }
   cout << max;
 return 0;
 }