
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
       ll ans=n;
       bool ft=false;
       while(ans<m){
          ans+=n;
          if( ans<m && m%ans!=0){
            ft=true;
            break;
          }
       }
       if(ft){
        yes;
       }else{
        no;
       }
    }
    
    return 0;
}