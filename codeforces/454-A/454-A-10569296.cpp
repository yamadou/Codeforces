#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   
   for(int i = 0; i < n/2 + 1; i++){
      for(int j = i; j < n/2; j++)
         cout << "*";
      for(int k = 0; k <= 2*i; k++)
         cout << "D";
      for(int j = i; j < n/2; j++)
         cout << "*";
      cout << endl;
   }
   
    for(int i = 0; i < n/2 ; i++){
      for(int j = 0; j <= i; j++)
        cout << "*";
      for(int j = n- 2; j > 2*i; j--)
         cout << "D";
      for(int j = 0; j <= i; j++)
        cout << "*";
      cout << endl;
   }
   
   return 0;
  }