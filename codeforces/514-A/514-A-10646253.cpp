#include <iostream>
using namespace std;

int main()
{
   string str;
   cin >> str;
   
   for(int i = 0; i < str.length(); i++){
      if(str.at(i) == '9' && i == 0)
         str.at(i) = str.at(i);
      else if(str.at(i) >= 53)
         str.at(i) = (57 - str.at(i)) + 48;
   }
   cout << str;
   return 0;
 }