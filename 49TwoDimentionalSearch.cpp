#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int sele;
    cin >> sele;            //search element

    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
     
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] == sele)
            {
                flag = true;
                cout<<i<<" "<<j<<endl;
            }
            
        }
        
    }

    if (flag)
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    


    return 0;
}