
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        char x=s[n-1];
        int c=count(s.begin(),s.end(),x);
        cout<<n-c<<'\n';
       }
       
    return 0;
}