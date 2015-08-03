#include <iostream>
using namespace std;

int main()
{
   int n, idx, count = 0, count2, idx2 = 1;
   cin >> n;
   idx = n*n;
   
   while(count < n){
      count2 = 0;
      while(count2 < n/2){
         cout << idx2 << " " << idx << " ";
         idx--;
         idx2++;
         count2++;
      }
      cout << endl;
      count++;
   }
       
 return 0;
}