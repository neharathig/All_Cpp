#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

     cin.ignore();

    char arr[n + 1];

   
    cin.getline(arr, n);

    cin.ignore(); //to clear the buffer

    int currlen = 0;
    int maxlength = 0;
    int i = 0;
    int start = 0;
    int maxst = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlength)
            {
                maxlength = currlen;
                maxst = start;
            }
            currlen = 0;
            start = i + 1;
        }
        else
        {
            currlen++;
        }

        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }

    cout << maxlength << endl;

    for (int i = 0; i < maxlength; i++)
    {
         cout<<arr[i+maxst];
    }
    

    return 0;
}