#include <iostream>
using namespace std;

bool pairsum(int array[], int n, int targetsum)
{
    int low = 0;
    int high = n-1;

    for (int i = 0; i < n; i++)
    {
      if (array[low]+array[high]==targetsum)
      {
          cout<<low<<" "<<high<<endl;
          return true;
      }
      else if (array[low] + array[high] > targetsum)
      {
          high = high - 1;
      }
      else
      {
          low = low + 1;
      }
        
    }
    
    return false;
}



int main()
{
    int n;
    cin >> n;
    int targetsum;
    cin>>targetsum;

    int array[n];  //array must be sorted

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout<<pairsum(array,n,targetsum)<<endl;

    return 0;
}