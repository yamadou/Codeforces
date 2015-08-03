#include <iostream>
using namespace std;

int main()
{
  int n, temp, count, problem = 0;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    
    count = 0;
    for(int j = 0; j < 3; j++){
      cin >> temp;
      if(temp)
        count++;
    }
    if(count >= 2)
      problem++;
  }
  
  cout << problem;
  return 0;
 }