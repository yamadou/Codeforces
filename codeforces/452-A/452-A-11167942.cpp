#include<iostream>
using namespace std;

int main()
{
   string str;
   int tp, max = 0, count = 0, idx;
   string arr[8]= {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
   
   cin >> tp >>  str;
   if(tp == 6)
      idx = 3;
   else if(tp == 8)
       idx = 0;
   else{
   for(int i = 0; i < 8; i++){
      count = 0;
      for(int j = 0; j < 6; j++){
         if(str.at(j) == arr[i].at(j))
            count++;
      }
      if(count > max){
         max = count;
         idx = i;
      }
    }
    } 
    cout << arr[idx];
    return 0;
}