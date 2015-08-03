#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, one = 0, two = 0, three = 0, w;
   cin >> n;
   int arr[n];
   vector<int> a, b , c;
   
   for(int i = 0; i < n; i++){
      cin >> arr[i];
      if(arr[i] == 1){a.push_back(i+1); one++;}
      else if(arr[i] == 2) {b.push_back(i+1); two++;}
      else {c.push_back(i+1); three++;}
   }
   
   if(one < two && one < three)
      w = one;
   else if(two < three)
      w = two;
   else
      w = three;
   
   if(!one || !two || !three)
      cout << 0;
   else{
      cout << w << endl;
      for(int i = 0; i < w; i++)
          cout << a.at(i) << " " << b.at(i) << " " << c.at(i) << endl;
   }
   
  return 0;
 }