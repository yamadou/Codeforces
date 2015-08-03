#include <iostream>
using namespace std;

int main()
{
   int a, b, c, max;
   cin >> a >> b >> c;
   max = a + b + c;
   
   if(a*b*c > max)
      max = a*b*c;
   if(a*(b+c) > max)
      max = a*(b+c);
   if((a+b)*c > max)
      max = (a+b)*c;
   if(a+b*c > max)
      max = a+b*c;
   if(a*b+c > max)
      max = a*b+c;
   cout << max;
 }