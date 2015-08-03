#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int n, p, q, temp, idx = 1;
   bool isinvec = true;
   vector<int> myvec;
   vector<int>::iterator it;
   cin >> n;
   cin >> p;
   
   for(int i = 0; i < p; i++){
      cin >> temp;
      it = find(myvec.begin(), myvec.end(), temp);
      if(it == myvec.end())
         myvec.push_back(temp);
   }
   
   cin >> q;
   for(int i = 0; i < q; i++){
      cin >> temp;
      it = find(myvec.begin(), myvec.end(), temp);
      if(it == myvec.end())
         myvec.push_back(temp);
   }
   
   while(idx <= n && isinvec){
      it = find(myvec.begin(), myvec.end(), idx);
      if(it == myvec.end())
         isinvec = false;
      idx++;
   }
   
   if(isinvec)
      cout << "I become the guy.";
   else
     cout << "Oh, my keyboard!";
   return 0;
 }