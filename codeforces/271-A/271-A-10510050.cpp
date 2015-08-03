#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   int n, count;
   cin >> n;
   string str;
   
   while(count != 4){
   
      n++;
      count = 1;
      stringstream convert;
      convert << n;
      str = convert.str();
      
      if(str.at(0) != str.at(1))
        count++;
      if(str.at(2) != str.at(0) && str.at(2) != str.at(1))
         count++;
      if(str.at(3) != str.at(0) && str.at(3) != str.at(1) && str.at(3) != str.at(2))
         count++;
     }
     
     cout << n;
     return 0;
  }