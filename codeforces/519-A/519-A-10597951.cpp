#include <iostream>
using namespace std;

int main()
{
   char temp;
   int A = 0, B = 0;
   
   for(int i = 0; i < 64; i++){
      cin >> temp;
      if(isalpha(temp) && isupper(temp)){
         if(temp == 'Q')
            A += 9;
         else if(temp == 'R')
            A += 5;
         else if(temp == 'B' || temp == 'N'  )
            A += 3;
         else if (temp == 'P')
            A += 1;
       
       } else if(isalpha(temp) && islower(temp)){
          if(temp == 'q')
            B += 9;
         else if(temp == 'r')
            B += 5;
         else if(temp == 'b' || temp == 'n'  )
            B += 3;
         else if (temp == 'p')
            B += 1;
       }
     }

     if(A > B)
        cout << "White";
     else if(B > A)
        cout << "Black";
    else
       cout << "Draw";
     return 0;
  }