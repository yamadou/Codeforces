#include<iostream>
using namespace std;

int main()
{
   int n, k, l, c, d, p, nl, np, liter, limes, count = 0;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;  
   liter = k*l;
   limes = c*d;
   while(liter - nl >= 0 && limes - 1 >= 0  && p - np >= 0){
      count++;
      liter -= nl;
      limes--;
      p -= np;
   }
   cout << count/n;
   return 0;
 
}