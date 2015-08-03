#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n, v, j, item, temp, min, count = 0;
   vector<int> vec;
   cin >> n >> v;
   //
   for(int i = 1; i <= n; i++){
      cin >> item;
      j = 0;
      cin >> temp;
      min= temp;
      for(int j = 0; j < item -1 ; j++){
         cin >> temp;
         if(temp < min)
            min = temp;
      }
       if(min < v){
            count++;
            vec.push_back(i);
          }
   }
   
   cout << count << endl;
   for(int i = 0; i < count; i++)
      cout << vec.at(i) << " ";
   return 0;
  }