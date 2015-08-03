#include <iostream>
#include <queue>
using namespace std;

int main()
{
   int n, m, temp;
   cin >> n >> m;
   queue<int> stud;
   queue<int> wanted;
   queue<int> idx;
   
   for(int i = 1; i <= n; i++){
      cin >> temp;
      wanted.push(temp);
      idx.push(i);
      stud.push(0);
   }
   
   while(!stud.empty()){
   
  
      if((stud.front() + m) >= wanted.front()){
         stud.pop();
         wanted.pop();
         temp = idx.front();
         idx.pop();
         
      }else{
         temp = stud.front() + m;
         stud.pop();
         stud.push(temp);
         
         temp = wanted.front();
         wanted.pop();
         wanted.push(temp);
         
         temp = idx.front();
         idx.pop();
         idx.push(temp); 
       }
   }  
 
 cout << temp;
  return 0;
 }