#include<iostream>
using namespace std;

int main()
{
   int n, m, idx = 1;
   cin >> n >> m;
   
   while(m - idx >= 0){ 
      m -= idx;
      idx++;
      if(idx > n)
         idx = 1;
    }
    cout << m;
    return 0;
}