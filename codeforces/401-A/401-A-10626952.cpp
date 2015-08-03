#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n, x, temp, min = 0, count = 0;
   cin >> n >> x;
   
   for(int i = 0; i < n; i++){
      cin >> temp;
      count += temp;
   }
   
   temp = abs(count);
   while(temp != 0){
      while(temp - x < 0)
         x--;
      temp -= x;
      min++;
   }
   cout << min;

   return 0;
  }