#include<iostream>
using namespace std;

int main()
{
   int n, tp, sum = 0, count = 0;
   cin >> n;
   int arr[n];
   
   for(int i = 0; i < n; i++){
      cin >> arr[i];
      sum += arr[i];
   }
   
   for(int i = 0; i < n; i++){
      tp = sum - arr[i];
      if(tp%2==0)
         count++;
   }
   
   cout << count;
   return 0;
}