#include<iostream>
using namespace std;

int main()
{
   int n, a, b, idx = 0;
   cin >> n;
   bool poss = true;
   int arr[n];
   for(int i = 0; i < n; i++)
      cin >> arr[i];
 
   while(idx < n-1 && arr[idx] < arr[idx+1] && (idx+1) != (n-1))
      idx++;
   a = idx;
     
   while(idx < n-1 && arr[idx] > arr[idx+1])
      idx++;
   b = idx;
   
   while(idx < n-1 && poss){
       if(arr[idx] > arr[idx+1])
           poss = false;
       idx++;
   }
   if((b < n-1 && arr[a] > arr[b+1] ) ||(b == n-1 && arr[a-1] > arr[b] && a != 0) )
      poss = false;

   if(poss)
      cout << "yes" << endl << a+1 << " " << b+1;
   else
      cout << "no";
      
   return 0;
}