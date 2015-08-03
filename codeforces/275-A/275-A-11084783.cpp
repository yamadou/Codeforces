#include<iostream>
using namespace std;

void toggle(int &a);

int main()
{ 
  int arr[5][5] = {0};
  int tp[5][5];
  
  for(int i = 0; i < 5; i++){
     for(int j = 0; j < 5; j++)
        tp[i][j] = 1;
   }

  for(int i = 1; i <= 3; i++){
     for(int j = 1; j <= 3; j++){
        cin >> arr[i][j];
        if(arr[i][j] % 2 != 0){
           toggle(tp[i][j]); 
           toggle(tp[i][j+1]);
           toggle(tp[i][j-1]);
           toggle(tp[i+1][j]);
           toggle(tp[i-1][j]);
        }
     }
   }

   for(int i = 1; i <= 3; i++){
     for(int j = 1; j <= 3; j++)
         cout << tp[i][j];
     cout << endl;
   }
   
   return 0;
}

void toggle(int &a)
{
   if(a == 0)
      a = 1;
   else 
      a = 0;
}