#include<iostream>
using namespace std;

int main()
{
   int n, m, k, temp, count = 0;
   cin >> n >> m >> k;
   
   for(int i = 0; i < n; i++){
   
      cin >> temp;
      if(temp == 1){
         if(m > 0)
            m--;
         else
            count++;
      
      }else{
         if(k > 0)
            k--;
          else if(k == 0 && m > 0)
             m--;
          else
             count++;
       }
    }
    
    cout << count;
    return 0;
  }