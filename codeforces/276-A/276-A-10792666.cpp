#include<iostream>
using namespace std;

int main()
{
   int n, k, fi, ti, joy;
   cin >> n >> k >> fi >> ti;
   
   if(ti > k)
      joy = fi - (ti-k);
   else
      joy = fi;
 
   for(int i = 0; i < n-1; i++){
      cin >> fi >> ti;
      if(ti > k)
         fi = (fi - (ti-k));
      if(fi > joy)
         joy = fi;
   }
   cout << joy;
   return 0;
  }