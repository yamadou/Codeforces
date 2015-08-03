#include <iostream>
using namespace std;

int main()
{
   int n, count = 1;
   cin >> n;
   
   if(n%2 == 0){
      cout << (n/2)*n << endl;
      for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
            if((i % 2 == 0 && count % 2 != 0) || (i % 2 != 0 && count % 2 == 0))
               cout << "C";
            else
               cout << ".";
            count++;
         }
         cout << endl;
      }
            
   }else{

      cout << ((n - (n/2)) * (n - (n/2))) + ((n/2) * (n/2)) << endl;
      for(int i = 0; i < n; i++){
         for(int i = 0; i < n; i++){
            if(count % 2 != 0)
               cout << "C";
            else
               cout << ".";
            count++;
         }
         cout << endl;
      }
   }
   return 0;
  }