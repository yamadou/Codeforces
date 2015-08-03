#include<iostream>
using namespace std;

int main()
{
   int n;
   cin >> n; 

   if( n == 2)
      cout << 1 << endl << 1;
   else if(n == 3)
      cout << 2 << endl << 1 << " " << 3;
   else if( n % 2 != 0){ 
      cout << n << endl;
      for(int i = n; i >= 1; i-=2)
         cout << i << " ";
      for(int i = n-1; i >= 2; i-=2)
         cout << i << " "; 
      cout << endl;
   } else {  
      cout << n << endl;
      for(int i = n-1; i >= 1; i-=2)
         cout << i << " "; 
      for(int i = n; i >= 2; i-=2)
         cout << i << " ";
      cout << endl;
   }
   return 0;
}