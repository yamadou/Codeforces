#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int size, i = 0;
    bool islucky = true;
    cin >> str;
    size = str.length();

    if(str.length() == 1 && str.at(0) != '1')
       islucky = false;
    else if(str.length() == 2 && str.at(1) != '1' && str.at(1) !=  '4')
       islucky = false;
    else{
       while(i < size && islucky){
          if(i+ 2 < size && str.at(i) == '1' && str.at(i+1) == '4'  && str.at(i+2) == '4')
             i += 3;
          else if(i+ 1< size &&  str.at(i) == '1' && str.at(i+1) == '4')
             i += 2;
          else if(str.at(i) == '1')
             i++;
          else
             islucky = false;
       }
    }
    
    if(islucky)
       cout << "YES";
    else
       cout << "NO";
  return 0;
}