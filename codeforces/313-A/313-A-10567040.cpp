#include <iostream>
#include <sstream>
using namespace std;

int main()
{
   int n;
   string str;
   stringstream convert;
   cin >> n;
   
   if(n >= 0)
      cout << n;
   else{
      convert << n;
      str = convert.str();
     
     
      if(str.at(str.length() - 1) > str.at(str.length() - 2))
         str.erase(str.end()-1);
      else
         str.erase(str.end()-2);
      if(str == "-0")
         str.erase(str.begin());
    cout << str;
    }
    return 0;
  }