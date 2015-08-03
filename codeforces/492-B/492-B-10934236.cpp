#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
   int n, l;
   double d = 0;
   cin >> n >> l;
   int arr[n];

   for(int i = 0; i < n; i++)
      cin >> arr[i];
   sort(arr, arr+n);
    
   for(int i = 0; i < n-1; i++){
      if(abs(arr[i] - arr[i+1]) > d)
          d = abs(arr[i] - arr[i+1]) ;
   }
   
   d = d/2;
   if(arr[0] != 0 ||  arr[n-1] != l){
      if(arr[0] > d && arr[0] > (l - arr[n-1]))
          d = arr[0];
      else  if((l - arr[n-1]) > d)
          d = (l - arr[n-1]);
      else 
        d = d;
   }
  
   cout << fixed << setprecision(10) << d;
  
   return 0;
}