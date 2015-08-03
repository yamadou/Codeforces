#include<iostream>
using namespace std;

int main()
{
   int n, temp, first, last, a = 0, b = 0;
   cin >> n;
   int arr[n];
   
   for(int i = 0; i < n; i++)
      cin >> arr[i];
   
   first = 0;
   last = n-1;
   for(int i = 0; i < n; i++){

       if(i%2 == 0){
          if(arr[first] > arr[last])
             a += arr[first];
          else
             a += arr[last];
       }else{
          if(arr[first] > arr[last])
             b += arr[first];
          else
             b += arr[last];
       }

       if(arr[first] > arr[last])
          first++;
       else
          last--;
     }
     cout << a << " " << b;
    return 0;
}