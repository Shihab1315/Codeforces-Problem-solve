
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
    ll n;
    cin>>n;
    ll ans=1;
   
    for(int i=2;i<=n;i*=2){
           ans+=i;
    }
    ll sum=(n*(n+1))/2;
    
    ll z=sum-ans;
    ll x=z-ans;
    cout<<x<<'\n';
  }
  
    return 0;
}