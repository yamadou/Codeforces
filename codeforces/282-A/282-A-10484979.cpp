#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n, x = 0;
  string temp;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> temp;
    if(temp.at(0) == '+' || temp.at(1) == '+')
       x++;
    else
      x--;
  }
  
  cout << x;
  
  return 0;
  }