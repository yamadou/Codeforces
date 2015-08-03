#include <iostream>
#include <string>
using namespace std;

int main()
{
   int socks, m, days = 0;
   cin >> socks >> m;
   
   while(socks){
      socks--;
      days++;
      if(days && days % m == 0)
        socks++;
   }
   
   cout << days;
   return 0;
  }