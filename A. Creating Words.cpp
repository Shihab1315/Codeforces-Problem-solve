
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    string s,h;
    cin>>s>>h;
   
    char ch=s[0];
    s[0]=h[0];
    h[0]=ch;
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<" ";
     for(int i=0;i<s.size();i++){
        cout<<h[i];
    }
   
   }
    return 0;
}