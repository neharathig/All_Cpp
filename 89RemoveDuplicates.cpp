//Remove adjacent duplicates 
#include<iostream>
using namespace std;

string removeDuplicate(string s)
{
    if (s.length()==0)
    {
        return "";
    }
    
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return(ch+ans);
}

int main()
{
    cout<<removeDuplicate("aaabbbcccddddeeee")<<endl;
    return 0;
}
