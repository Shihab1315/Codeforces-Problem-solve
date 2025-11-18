
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
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
    bool ft=false;
    for(int i=0;i<s.size()-1;i++){
         if(s[i]!=s[i+1]){
            ft=true;
           swap(s[i],s[i+1]);
           break;
         }
    }
    if(ft==false){
        no;
    }else{
        yes;
        cout<<s<<'\n';
    }
}

    return 0;
}