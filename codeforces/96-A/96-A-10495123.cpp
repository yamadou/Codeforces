#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cin >> str;
  int count = 1;
  bool isDangerous = false;
 
  
  for(int i = 0; i < str.length() - 1; i++){
    
    if(str.at(i) == str.at(i+1))
      count++;
    else
      count = 1;
      
    if(count >= 7)
      isDangerous = true;
    
  }

  if(isDangerous)
    cout << "YES";
  else
    cout << "NO";
  
  return 0;
  }