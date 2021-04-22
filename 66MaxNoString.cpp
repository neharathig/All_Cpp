#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;           //enter number   ///846712359
    cin>>s;

    sort(s.begin(),s.end(), greater<int>());        //include algo

    cout<<s<<endl;                  //987654321
    return 0;
}
