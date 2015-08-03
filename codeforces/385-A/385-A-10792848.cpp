#include<iostream>
using namespace std;

int main()
{
   int n, c, x, y, z, temp;
   cin >> n >> c >> x >> y;
   temp = x - y;
   
   for(int i = 0; i < n-1; i++){
      cin >> z;
      if((y-z) > temp)
         temp = y - z;
      y = z;
   }
   if((temp-c) <= 0)
      cout << 0;
   else 
      cout << temp - c;
   return 0;
  }