#include <iostream>
using namespace std;

int main()
{
   int arr[4];
   string str;
   int count = 0;
    
   for(int i = 0; i < 4; i ++)
      cin >> arr[i];
   cin >> str;
   
   for(int i = 0; i < str.length(); i++){
      if(str.at(i) == '1')
         count += arr[0];
      else if(str.at(i) == '2')
         count += arr[1];
      else if(str.at(i) == '3')
         count += arr[2];
      else
         count += arr[3];
    }
    
    cout  << count;
    return 0;
  }