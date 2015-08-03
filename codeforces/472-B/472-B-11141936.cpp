#include<iostream>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
   int n, k, b, tp, time = 0,  a = 1;
   cin >> n >> k;
   int arr[n];
   queue<int> myqueue;
  
  for(int i = 0; i < n; i++)
     cin >> arr[i];
  sort(arr, arr+n);
  
  for(int i = 0; i < n; i++)
     myqueue.push(arr[i]);

  while(myqueue.empty() == false){

     b = myqueue.front();
     tp = myqueue.size() / k;
     if(myqueue.size()%k != 0)
        tp++;
     time += tp*2*abs(b-a);
     
     while(myqueue.front() == b)
        myqueue.pop();
     a = b;
    }
   
   cout << time;
   return 0;
}