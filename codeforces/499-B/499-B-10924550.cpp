#include<iostream>
using namespace std;

int main()
{
   int n, m, idx;
   string temp, temp2;
   cin >> n >> m;
   string fl[m];
   string sl[m];
   
   for(int i = 0; i < m; i++){
      cin >> temp  >> temp2;
      fl[i] = temp;
      if(temp.length() <= temp2.length())
          sl[i] = temp;
      else
          sl[i] = temp2;
    }
    
    for(int i = 0; i < n; i++){
       cin >> temp;
       for(int j = 0; j < m; j++){
          if(fl[j] == temp)
             idx = j;
       }
       cout << sl[idx] << " ";
    }
    return 0;
}