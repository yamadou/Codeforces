#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, t;
   string str;
   cin >> n >> t >> str;
   
   for(int i = 0; i < t; i++){
      for(int i = 0; i <= n-2; i+=2){
         if(str.at(i) == 'B' && str.at(i+1) == 'G'){
            str.at(i) = 'G';
            str.at(i+1) = 'B'; 
         }else
           i--;
       }
    }
    
    for(int i = 0; i < n; i++)
       cout << str.at(i);
    return 0;
   }