#include<iostream>
using namespace std;

int main()
{
   int n, a, b, count = 0;
   cin >> n >> a >> b;
   for(int i = a+1; i <= n; i++){
      if(n-i <= b)
         count++;
    }
   cout << count;
   return 0;
  }