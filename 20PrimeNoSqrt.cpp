#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i, no;


    cout<<"Enter Number: ";
    
    cin>>no;

    bool flag=0;

    for(i=2; i<=sqrt(no); i++)
    {
        if(no%i == 0)
        {
            flag=1;
            cout<<" Non prime "<<endl;
            break;
        }

    }
      
    if(flag == 0)
    {
        cout<<"prime no"<<endl;
    }

}