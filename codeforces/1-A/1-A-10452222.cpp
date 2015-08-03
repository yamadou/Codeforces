#include <iostream>
using namespace std;

int main()
{
 long long int n, m, a, vertical, horizontal;
 cin >> n >> m >> a;
 
 horizontal = m/a;
 vertical = n/a;
 
 if(m % a)
   horizontal++;

 if(n % a)
   vertical++;
  
  cout <<  horizontal * vertical;

  return 0;
  }