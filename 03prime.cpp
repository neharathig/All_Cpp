#include<iostream>
using namespace std;

int main()
{
    int i, no;


    cout<<"Enter Number: ";
    
    cin>>no;

    for(i=2; i< no; i++)
    {
        if(no%i == 0)
        {
            cout<<" Non prime "<<endl;
            break;
        }

    }
      
    if(i == no)
    {
        cout<<"prime no"<<endl;
    }

}