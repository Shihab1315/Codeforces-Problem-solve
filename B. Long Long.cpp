
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
     
        ll ans=0;
        int count=0;
         int op=0;
       for(int i=0;i<n;i++){
          if(v[i]<0){
            count++;
          }else if(count>0 && v[i]>0){
              op++;
              count=0;
          }
       }
       if(count>0){
        op++;
       }
       for(int i=0;i<n;i++){
        if(v[i]<0){
            ans-=v[i];
        }else{
            ans+=v[i];
        }
       }
      
        cout<<ans<<" "<<op<<'\n';
    }
    
    return 0;
}