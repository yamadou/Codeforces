#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  bool isUper = true;
  cin >> str;
  
  for(int i = 1; i < str.length(); i++){
     if(!isupper(str.at(i)))
        isUper = false;
  }
  
  if(isUper){
     for(int i = 0; i < str.length(); i++){
        if(isupper(str.at(i)))
          str.at(i) =  tolower(str.at(i));
        else
          str.at(i) = toupper(str.at(i));
     }
   }
     
     cout << str;
     return 0;
  }