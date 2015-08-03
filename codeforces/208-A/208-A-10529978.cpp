#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str;
   cin >> str;
   
   if(str.length() >= 3){
      for(int i = 0; i < str.length() - 2; i++){
         if(str.at(i) == 'W' && str.at(i+1) == 'U' && str.at(i+2) == 'B')
            str.replace(str.begin()+i, str.begin()+i+3, " ");
      }
  }
   cout << str;
   return 0;
  }