#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string str;
  cin >> str;
  char temp;
  vector<char> arr;
  
  for(int i = 0; i < str.length(); i++){
     temp = tolower(str.at(i));
     if(temp != 'a' && temp != 'e' && temp != 'i'&&temp !='o'&&temp!='u'&&temp != 'y')
       arr.push_back(temp);
  }
  
  for(int i = 0; i < arr.size(); i++)
    cout << "." << arr.at(i);
    
  return 0;
 }