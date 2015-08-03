#include <iostream>
using namespace std;

int main()
{
   int n, m, tmp;
   cin >> n >> m;
   long long  time = 0, init = 1;

   for(int i = 0; i < m; i++){
   
      cin >> tmp;
      if(init > tmp){
        time += n - init + 1;
        init = 1;
     } 
     while(init < tmp){
         init++;
         time++;
     }
    }
    cout << time;
    return 0;
  }