#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, t1 = 0, t2 = 0;
   string temp, team1, team2;
   cin >> n;
   
   cin >> team1;
   t1++;
   if(n > 1){
   for(int i = 0; i < n-1; i++){
      cin >> temp;
      if(temp == team1)
         t1++;
       else{
         team2 = temp; 
         t2++;
      }
   }
   }
   if(t1 > t2)
      cout << team1;
   else
      cout << team2;
    return 0;
   }