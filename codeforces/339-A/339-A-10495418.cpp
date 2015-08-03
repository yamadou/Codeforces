#include <iostream>
#include <vector>
#include <string>
using namespace std;

void insertionSort(char arr[], int size)
{
  int temp, j;
  for(int i = 1; i < size; i++){
     j = i;
     while(j > 0 && arr[j-1] > arr[j]){
       temp = arr[j];
       arr[j] = arr[j-1];
       arr[j-1] = temp;
       j--;
       }
  }
 }

int main(){
  
  string str;
  cin >> str;
  char arr[100];
  int idx = 0;
  
  for(int i = 0; i < str.length(); i++){
    if(str.at(i) != '+'){
      arr[idx] = str.at(i);
      idx++;
    }
  }
  
  insertionSort(arr, idx);
  
  cout << arr[0];
  for(int i = 1; i < idx; i++)
    cout << "+" << arr[i];

  return 0;
  }