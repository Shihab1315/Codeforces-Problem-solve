
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
       vector<int>v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       int ne=0;
        ll mx= LLONG_MAX;
        ll ans=0;
        bool ft=false;
       for(int i=0;i<n;i++){
            mx=min(mx,(ll)abs(v[i]));
        if(v[i]<0){
            ne++;
            
          }else if(v[i]==0){
            ft=true;
          }
          ans+=abs(v[i]);
 
       }
      
       if(ne%2!=0){
          if(ft){
            cout<<ans<<'\n';
          }else{
              
              cout<<ans-2*mx<<'\n';
          }
       }else{
            cout<<ans<<'\n';
       }
       
       
    }
    
    return 0;
}