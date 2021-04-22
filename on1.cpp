#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cstring>

int processArray(std::vector<int> &array) {

  int highCent=0;
  int len = array.size();
  int i;

  for ( i=0; i<len; i++)
  {
    if(array[i]<100 && array[i]>highCent)
    {
        highCent=array[i];
    }
  }
   


  return highCent;
}

int main(void) {
  std::vector<int> array;
  int val;
  while (std::cin >> val) {
    if (val < 0) break;
    array.push_back(val);
  }
  std::cout << processArray(array) << std::endl;
  return 0;
}

