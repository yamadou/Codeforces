#include <iostream>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   long long  time = 0, init = 1;
   int task[m];
   for(int i = 0; i < m; i++)
      cin >> task[i];
   
   for(int i = 0; i < m; i++){
   
      if(init > task[i]){
        time += n - init + 1;
        init = 1;
     } 
     while(init < task[i]){
         init++;
         time++;
     }
    }
    cout << time;
    return 0;
  }