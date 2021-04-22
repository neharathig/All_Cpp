#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cin>>str;

    //convert into uppercase

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i] -=32;
        }
        
    }
    
    //alt
    transform(str.begin(),str.end(),str.begin(), ::toupper);
 
    cout<<str<<endl;

    //convert into lowercase

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
        
    }

    //alt
    transform(str.begin(),str.end(),str.begin(), ::tolower);


    cout<<str<<endl;

    return 0;
}