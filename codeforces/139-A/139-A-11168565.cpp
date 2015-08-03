#include<iostream>
using namespace std;

int main()
{
   int n, day = -1, count = 0;
   cin >> n;
   int arr[7];

   for(int i = 0; i < 7; i++)
      cin >> arr[i];
   
   while(count < n){
      day++;
      if(day == 7)
         day = 0;
      count += arr[day];
   }
   
   cout << day+1;
   return 0;
}