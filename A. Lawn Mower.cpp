
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
   while(t--){
       int n,w;
       cin>>n>>w;
       int ans=n-(n/w);
       cout<<ans<<'\n';
   }
    return 0;
}