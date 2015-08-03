#include<iostream>
using namespace std;

int main()
{
   int n, tp, idx,  fg = 0, sum = 0;
   cin >> n;
   int arr[n+1] = {0};
   
   for(int i = 0; i < n; i++){
      cin >> tp;
      sum += tp;
   }

       for(int i = 1; i <= 5; i++){
           idx = -1;
           tp = sum+i;
           for(int j = 0; j < tp; j++){
              idx++;
              if(idx == n+1)
                 idx = 0;
           } 
           if(idx != 0)
              fg++;
        
   }
   cout << fg;
   return  0;
}