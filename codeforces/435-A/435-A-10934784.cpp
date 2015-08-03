#include<iostream>
using namespace std;

int main()
{
   int n, m, temp = 0, bus = 0, idx = 0;
   cin >> n >> m;
   int arr[n];
   
   for(int i = 0; i < n; i++)
      cin >> arr[i];
   
   while(idx < n){
      temp = arr[idx];
      while(temp + arr[idx+1] <= m){
          temp += arr[idx+1];
          idx++;
      }
      idx++;
      bus++;
  }

  cout << bus;
  return 0;
}