#include<iostream>
using namespace std;

int main()
{
   int hr, mn, hr2, mn2, h, m;
   char c;
   cin >> hr >> c >> mn;
   cin >> hr2 >> c >> mn2;
   
   h = hr - hr2;
   m = mn - mn2;
   if( m < 0){
      m = 60 + m;
      h--;
   }

   if( h < 0)
      h = 24 + h;

  if(h < 10 && m < 10)
     cout << "0" <<h << ":0" << m;
  else if(h <  10)
     cout << "0" <<h << ":" << m;
  else if(m < 10)
      cout <<h << ":0" << m;
  else
     cout << h << ":" << m;
   return 0;
}