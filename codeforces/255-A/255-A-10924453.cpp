#include<iostream>
using namespace std;

int main()
{
   int n, temp, idx = 0, maxIdx = 0;
   cin >> n;
   int arr[3]{};
   
   for(int i = 0; i < n; i++){
      cin >> temp;
      arr[idx] += temp;
      idx++;
      if(idx == 3)
        idx = 0;
   }
   for(int i = 1; i < 3; i++){
      if(arr[i] > arr[maxIdx])
          maxIdx = i;
   }
   
   if(maxIdx == 0)
     cout << "chest";
   else if(maxIdx == 1)
     cout << "biceps";
   else
     cout << "back";
   return 0;
    
}