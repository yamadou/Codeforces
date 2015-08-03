#include <iostream>
#include <locale>
using namespace std;

int main()
{
   string str;
   cin >> str;
   locale loc;
   int upper = 0, lower = 0;
   
   for(int i = 0; i < str.length(); i++){
      if(islower(str.at(i)))
         lower++;
      else
         upper++;
   }
   
   if(upper > lower)
      for(int i = 0; i < str.length(); i++)
         cout << toupper(str.at(i), loc);
   else
      for(int i = 0; i < str.length(); i++)
         cout << tolower(str.at(i), loc);
   return 0;
  }