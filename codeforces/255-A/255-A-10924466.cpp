#include<iostream>
using namespace std;

int main()
{
   int n, temp, idx = 0;
   cin >> n;
   int arr[3]{};
   
   for(int i = 0; i < n; i++){
      cin >> temp;
      arr[idx] += temp;
      idx++;
      if(idx == 3)
        idx = 0;
   }

   if(arr[0] > arr[1] && arr[0] > arr[2])
     cout << "chest";
   else if(arr[1] > arr[2])
     cout << "biceps";
   else
     cout << "back";
   return 0;
    
}