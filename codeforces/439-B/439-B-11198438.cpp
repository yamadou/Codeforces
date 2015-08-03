#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
   unsigned long long int x, n, count = 0;
   cin >> n >> x;
   
   long int arr[n];
   for(int i = 0; i < n; i++)
      cin >> arr[i];
    sort(arr, arr+n);
   
    for(int i = 0; i < n; i++){
       count += arr[i]*x;
       if(x > 1)
          x--;
     }
   
   cout << count;
   return 0;
}