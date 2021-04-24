// move char to the end of string

#include<iostream>
using namespace std;

string moveallchar(string s,char c)
{
    if (s.length()==0)
    {
        return "";
    }
    
    char ch = s[0];
    string ans = moveallchar(s.substr(1), c);

    if (ch==c)
    {
        return ans+ch;
    }
    return ch + ans;
}

int main()
{
    char c;
    cin>>c;
    cout<<moveallchar("abcdeasxxxsjjhhcfgfh",c)<<endl;
    return 0;
}
