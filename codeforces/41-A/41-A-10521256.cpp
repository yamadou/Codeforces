#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   bool correct = true;
   string s1, s2;
   cin >> s1 >> s2;
   int idx = s2.length() - 1;
   
   for(int i = 0; i < s1.length(); i++){
      if(s1.at(i) != s2.at(idx)){
        correct = false;
        break;
      }
      idx--;
   }      
   
   if(correct)
     cout << "YES";
    else
       cout << "NO";
       
    return 0;
  }