#include <iostream>
using namespace std;

int main()
{
   int n, count = 0, idx;
   string str;
   
   cin >> n >> str;
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o',           'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};  
   
   if(n < 26)
      cout << "NO";
      
  else{
     for(int i = 0; i < 26; i++){
        idx = 0;
       while(idx < str.length() && tolower(str.at(idx)) != arr[i])
           idx++;
           
        if(idx < str.length())
           count++;
        else
           break;
     }
     
     if(count == 26)
      cout << "YES";
     else
      cout << "NO";
   }  

  return 0;
 }