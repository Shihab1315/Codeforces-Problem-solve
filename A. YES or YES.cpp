
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int t;
     cin>>t;
     while(t--){
        string s;
        cin>>s;
        if(s== "yES" ||s=="Yes" || s=="yes" || s=="YES" || s=="YeS" || s=="YEs" || s=="yEs" || s=="yeS"){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
     }
    return 0;
}