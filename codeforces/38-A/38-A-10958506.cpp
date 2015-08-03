#include<iostream>
using namespace std;

int main()
{
   int n, a, b, yr = 0;
   cin >> n;
   int arr[n-1];
   
   for(int i = 0; i < n-1; i++)
      cin >> arr[i];
   cin >> a >> b;
   
   while(a != b){
      yr += arr[a-1];
      a++;
   }
    cout << yr;
    return 0;
}