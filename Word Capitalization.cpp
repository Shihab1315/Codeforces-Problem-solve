
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    string ans;

    char ch=toupper(s[0]);
    ans+=ch;
     for(int i=1;i<s.size();i++){
         ans+=s[i];
     }
    cout<<ans;
    return 0;
}