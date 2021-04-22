#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>


int processArray(std::vector<int> &array) {

  
  int len = array.size();
  int i;
  int count=0;

  for ( i=0; i<len; i++)
  {
    if(array[i]>10 && (array[i]%2)==1)
    {
        count++;
    }
  }
   


  return count;
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
