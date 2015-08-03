#include <iostream>
using namespace std;

int main()
{
   int n, temp, twenfive = 0, fifty = 0, count = 0;
   cin >> n;
   
   cin >> temp;
   if(temp == 25){
 
     twenfive++;
     while(count < n-1 && twenfive >= 0 && fifty >= 0){
         cin >> temp;
         if(temp == 25)
            twenfive++;
         else if(temp == 50){
            fifty++;
            twenfive--;
         }else if(temp == 100 && fifty > 0){
            fifty--;
            twenfive--;
         }else if(temp == 100 && fifty == 0)
            twenfive -= 3;   
         count++;
      }
    if(fifty >= 0 && twenfive >= 0)
       cout << "YES";
    else
       cout << "NO"; 
    }else
       cout << "NO";
    
 return 0;
 }