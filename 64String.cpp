#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str;
    //cin>> str;   Doesnt take space
    getline(cin,str);    //includes spaces

    string str1(5,'n');

    string str2 = "RadhaKrishna";

    cout<<str<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;

    //append
    cout<<str1 + str2 <<endl;
    cout<<str1.append(str2)<<endl;

    //clear
    str1.clear();   
    cout<<str1<<endl;

    //string comparison
    string s1 = "abc";
    string s2 = "xyz";

    if (!s1.compare(s2))
    {
        cout<<"Strings are equal";
    }
    else
    {
        cout<<"Not equal";
    }

    //erase
    string s3 = "nincompoop";
    s1.erase(3,2);
    cout<<s3<<endl;

    //string to int
    string s4 = "786";
    int x = stoi(s4);
    cout<<x<<endl;

    //sorting 
    string s5 = "ezwrxcvbhrecgvhbyjhgWSED";
    sort(s5.begin(), s5.end());   //use algorithm in header
    cout<<s5<<endl;

    return 0;
}