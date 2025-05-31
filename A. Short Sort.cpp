
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while (t--)
{
    string s;
    cin>>s;
    if((s[0]=='b' && s[1]=='c')|| s[0]=='c' && s[1]=='a'){
        cout<<"NO"<<"\n";
    }else{
        cout<<"YES"<<"\n";
    }
}

    return 0;
}