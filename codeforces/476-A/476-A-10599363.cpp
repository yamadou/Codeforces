#include <iostream>
using namespace std;

int main()
{
   int n, m, count = 0, moves = 0;
   cin >> n >> m;
   
   if(n < m)
      moves = -1;
   else{
      while(count < n){
         count += 2;
         moves++;
      }
      while(moves % m)
         moves++;
   }
         
   cout << moves;
   return 0;
 }