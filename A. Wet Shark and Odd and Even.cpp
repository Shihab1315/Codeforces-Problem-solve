
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   ll n;
   cin>>n;
   vector<ll>v(n);
   int oddc=0,evenc=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==0){
        evenc++;
    }else{
        oddc++;
    }
   }
   if(oddc==1 && evenc==0){
    cout<<0<<'\n';
    return 0;
   }
   sort(v.rbegin(),v.rend());
   if(oddc%2!=0){
    oddc--;
   }
   ll ans=0;
   for(int i=0;i<n;i++){
      if(v[i]%2!=0 && oddc!=0){
         ans+=v[i];
         oddc--;
      }else if(v[i]%2==0){
         ans+=v[i];
      }
   }
   cout<<ans<<'\n';

    return 0;
}