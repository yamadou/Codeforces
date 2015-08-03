#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
   string str;
   cin >> str;
   vector<char> myvec;
   vector<char>:: iterator it;
   
   for(int i = 0; i < str.length(); i++){
      it = find(myvec.begin(), myvec.end(), str.at(i));
      if(it == myvec.end())
         myvec.push_back(str.at(i));
   }
      
   if(myvec.size() % 2 == 0)
      cout << "CHAT WITH HER!";
   else
      cout << "IGNORE HIM!";
   return 0;
  }