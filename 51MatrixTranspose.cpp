#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n][n];
    int transmat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //swap rows and cols
            transmat[i][j] = array[j][i];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transmat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}