#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int n, m, min, max, tl;
   cin >> n >> m;
   int pass[n];
   int fail[m];

   for(int i = 0; i < n; i++)
      cin >> pass[i];
   for(int i = 0; i < m; i++)
      cin >> fail[i];
  
   sort(fail, fail+m);
   sort(pass, pass+n);
   min = tl = pass[n-1];
   max = fail[0];
   
   while (2*pass[0] > tl && min < max)
      tl++;

   if(min >= max || tl >= max)
      tl = -1;    
   cout << tl;
   
   return 0;
}