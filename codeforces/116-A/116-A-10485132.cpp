#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n, inbus, outbus, current = 0, max = 0;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> outbus >> inbus;
    current -= outbus;
    current += inbus;
    if(current > max)
      max = current;
  }
  
  cout << max;
  return 0;
  }