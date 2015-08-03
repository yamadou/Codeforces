#include<iostream>
using namespace std;

int main()
{
   int n, k, temp, count = 0;
   cin >> n >> k;
   
   for(int i = 0; i < n; i++){
      cin >> temp;
      if(temp + k <= 5)
         count++;
   }
   cout << count / 3;
   return 0;
  }