
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
         ll a,b,c;
         cin>>a>>b>>c;
         if(b*3<=c){
            cout<<a*b<<'\n';
         }else{
              ll x=a/3;
              ll z=a-x*3;
              ll ans=x*c;
              if(z!=0 && c>z*b){
                   ans+=z*b;
              }else if(z!=0){
                ans+=c;
              }
               cout<<ans<<'\n';
         }
        
        

     }
     
    return 0;
}