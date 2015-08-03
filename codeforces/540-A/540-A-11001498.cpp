#include<iostream>
using namespace std;

int diff(int a, int b, int arr[])
{
   int tp = 0, idx = 0, count = 0;

   while(arr[idx] != a)
      idx++;
   while(arr[idx] != b){
      idx++;
      tp++;
      if(idx > 9)
          idx = 0;
   }
   
   idx = 0;
   while(arr[idx] != a)
      idx++;
   
   while(arr[idx] != b){
      idx--;
      count++;
      if(idx < 0)
         idx = 9;
   }
   
   if(tp < count)
      return tp;
   else
      return count;
}

int main()
{
   int n, tp = 0, count = 0;
   int arr[10];
   string a, b;
   cin >> n >> a >> b;
   
   for(int i = 0; i < 10; i++)
      arr[i]= i;
   
    for(int i = 0; i < n; i++){
       tp = diff(a.at(i) - 48, b.at(i) - 48, arr);
       count += tp;
    }
    
    cout << count;
    return 0;
}