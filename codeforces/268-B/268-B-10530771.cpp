#include <iostream>
using namespace std;

int main()
{
   int n, idx = 1;
   cin >> n;
   int count = n;
   
   while(n - idx > 0){
      
      count += (idx+1)*(n - idx) - idx;
      idx++;
      
   }
   
   cout << count;
   return 0;
  }