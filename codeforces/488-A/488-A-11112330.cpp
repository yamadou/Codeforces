#include<iostream>
#include<sstream>
using namespace std;

int main()
{
   int n, count = 0;
   cin >> n;
   n++;
   string str;

   bool islucky = false;
   stringstream ss; ss << n; str = ss.str();
   
   while(!islucky){

      for(int i = 0; i < str.length(); i++){
         if(str.at(i) == '8')
            islucky = true;
      }
      
      n++;
      count++;
      ss << n; 
      str = ss.str();
   }

   cout << count;
   return 0;
}