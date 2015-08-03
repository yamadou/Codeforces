#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
   int a, b, s, x;
   cin >> a >> b >> s;
   
   x = abs(a) + abs(b);
   
   if((a == 0 && b == 0 && s%2 == 0) || x == s)
      cout << "YES";
   else if(s > x && (s-x)%2 == 0)
      cout << "YES";
   else
      cout << "NO";
   return 0;
 }