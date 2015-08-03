#include<iostream>
using namespace std;

int main()
{
   int n, idx = 0, sum1 = 0, sum2 = 0;
   string str;
   bool islucky = true;
   cin >> n >> str;
   
   while(idx < n/2 && islucky){
      if(str.at(idx) != '4' && str.at(idx) != '7')
         islucky = false;
       sum1 += (str.at(idx) - 48);
       idx++;
   }


   while(idx < n && islucky){
      if(str.at(idx) != '4' && str.at(idx) != '7')
         islucky = false;
      sum2 += (str.at(idx) - 48);
      idx++;
    }
    if(sum1 == sum2 && islucky)
      cout << "YES";
    else
      cout << "NO";

   return 0;
}