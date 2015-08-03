#include <iostream>
using namespace std;

int main()
{
  int n, num;
  string str;
  cin >> n;
  
  for(int i = 0; i < n; i++){
     cin >> str;
     if(str.length() > 10){
        num = str.length() - 2;
        cout << str.at(0) << num << str.at(str.length()-1) << endl;
     
     }else
        cout << str << endl;
   }
   
   return 0;
   }