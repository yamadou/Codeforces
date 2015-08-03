#include<iostream>
using namespace std;

int main()
{
   int n, nxtIdx, move = 0, counter = 1, unread = 0, firstIdx = -1;
   cin >> n;
   int arr[n];
 
   for(int i = 0; i < n; i++){
      cin >> arr[i];
      if(arr[i] == 1)
         unread++;
      if(arr[i] == 1 && firstIdx == -1)
         firstIdx = i;
   }
   
   if(unread > 0)
      move++;

  
   while(counter < unread){
      nxtIdx = firstIdx + 1;
      while(nxtIdx < n && arr[nxtIdx] != 1)
          nxtIdx++;
      
      if(nxtIdx - firstIdx == 1)
        move++;
      else if(nxtIdx - firstIdx > 1)
        move += 2;
      firstIdx = nxtIdx;
      counter++;
   }
   
   cout << move;
   return 0;
}