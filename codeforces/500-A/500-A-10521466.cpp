#include <iostream>
using namespace std;

int main()
{
   int n, t, position = 1;
   cin >> n >> t;
   int arr[n-1];
   
   for(int i = 0; i < n-1; i++)
      cin >> arr[i];
   
   while( position < t)
      position = position + arr[position - 1];
  
  if(position == t)
     cout << "YES";
  else
     cout << "NO";
  return 0;
}