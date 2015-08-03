#include<iostream>
using namespace std;

int main()
{
   int n, tp, pos = 0, neg = 0, idx = 0, count = 0;
   cin >> n;
   int arr[n], positive[n];
   
   for(int i = 0; i < n; i++){
      cin >> arr[i];
      if(arr[i] > 0)
         pos++;
      else if(arr[i] < 0)
         neg++;
   }
  
  if(neg == 1){
      while(arr[idx] > 0)
         idx++;
      cout << 1 << " " << arr[idx] << endl;
      
      cout << pos << " ";
      for(int i = 0; i < n; i++){
        if(arr[i] > 0)
           cout << arr[i] << " " ;
      }
      cout <<  endl << 1 << " " << 0;
   
   }else if(neg%2 != 0){

      cout << 1 << " ";
      for(int i = 0; i < n; i++){
         if(arr[i] < 0 && count < 1){
            cout << arr[i];
            count++;
          }else{
            positive[idx] = arr[i];
            idx++;
          }
      }
      cout << endl <<  idx-1 << " ";
      for(int i = 0; i < idx; i++){
         if(positive[i] != 0)
            cout << positive[i] << " ";
       }
       cout << endl << 1 << " " << 0 << endl;

    }else if(neg%2 == 0){
         cout << 1 << " ";
      for(int i = 0; i < n; i++){
         if(arr[i] < 0 && count < 1){
            cout << arr[i] << " ";
            count++;
          }else{
            positive[idx] = arr[i];
            idx++;
          }
      }
      cout << endl <<  idx-2 << " ";
      count = 0;
      for(int i = 0; i < idx; i++){

         if(positive[i] < 0 && count == 0){
            tp = positive[i];
            positive[i] = 0;
            count++;
         }
         if(positive[i] != 0)
            cout << positive[i] << " ";
       }
     cout << endl << 2 << " " << 0 << " " << tp;
    
    }
    return 0;
}