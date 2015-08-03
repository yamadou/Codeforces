#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n , m, count = 0;
   cin >> n >> m;
   
   for(int i = 0; i <= sqrt(n); i++){
      for(int j = 0; j <= sqrt(m); j++){
         if((i*i + j) == n && (i + j*j) == m)
            count++;
      }
   }
   cout << count;
   return 0;
}