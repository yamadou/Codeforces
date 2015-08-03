#include<iostream>
#include<bitset>
using namespace std;

int main()
{
   string str, tp;
   int n, m, k, team = 0, count = 0;
   cin >> n >> m >> k;
   int arr[m+1];
   
   for(int i = 0; i < m+1; i++)
      cin >> arr[i];
   
   bitset<31> b(arr[m]);
   tp = b.to_string();

   for(int i = m-1; i >= 0; i--){

       count = 0;
       bitset<31> b2(arr[i]);
       str = b2.to_string();
       for(int j = 0; j < 31; j++){
          if(str.at(j) != tp.at(j))
              count++;
        }
        
        if(count <= k)
           team++;
   }
   
   cout << team;
   return 0;
}