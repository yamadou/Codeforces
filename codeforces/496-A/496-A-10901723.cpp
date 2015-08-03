#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
  int n, min = 100000000, max, temp = 1;
  cin >> n;
  int arr[n];
  vector<int> myvec;

   for(int i = 0; i < n; i++)
      cin >> arr[i];

   for(int i = 0; i < n-2; i++){

      for(int j = 0; j < n; j++){
          if(j != temp)
             myvec.push_back(arr[j]);
       }
       

       max = abs(myvec.at(0) - myvec.at(1));
       for(int k = 1; k < n-2; k++){
          if(abs(myvec.at(k) - myvec.at(k+1)) > max)
             max = abs(myvec.at(k) - myvec.at(k+1));
        } 
        
        if(max < min)
           min = max;
        for(int k = 0; k < n-1; k++)
           myvec.pop_back();
        temp++;
   }

   cout << min;
   return 0;
}