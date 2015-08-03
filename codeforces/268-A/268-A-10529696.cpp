#include <iostream>
using namespace std;

int main()
{
   int n, count = 0;
   cin >> n;
   int guest[n], host[n];
   
   for(int i = 0; i < n; i++)
      cin >> host[i] >> guest[i];
   
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         if(i != j && host[i] == guest[j])
            count++;
      }
   }
   
   cout << count;
   return 0;
 }