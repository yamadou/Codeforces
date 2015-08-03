#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   string str, temp;
   getline(cin, str);
   string::iterator it;
   
   for(int i = 0; i < str.length(); i++){
      it = find(temp.begin(), temp.end(), str.at(i));
      if(isalpha(str.at(i)) && it == temp.end())
         temp += str.at(i);
   }
   
   cout << temp.length();
 return 0;
 }