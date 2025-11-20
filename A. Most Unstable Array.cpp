
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
        ll n,m;
       cin>>n>>m;
       if(n==1){
        cout<<0<<'\n';
       }else if(n==2){
            cout<<m<<'\n';
       }else{
          cout<<2*m<<'\n';
       }
       }
       
    return 0;
}