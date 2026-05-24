
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
       int count=0,mx=0;
       for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                count++;
            }else{
                mx=max(mx,count);
                count=0;
            }
       }
       cout<<mx+1<<'\n';
    }
    
    return 0;
}