#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number  "<<endl;

    cin>>n;

    for (int i = n; i >=1  ; i--)
    {
        int count=1;
        for (int j = n; j > n-i; j--)
        {
            
            cout<<count;  
            count++;
          
        }
        cout<<endl;
        
    }

    return 0;
}