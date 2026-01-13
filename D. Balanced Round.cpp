
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
       ll n,k;
       cin>>n>>k;
       vector<ll>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       int count=1,mx=1;
       for(int i=0;i<n-1;i++){
             int x=abs(v[i]-v[i+1]);
             if(x<=k){
                count++;
             }else{
                
                mx=max(mx,count);
                count=1;
             }
       }
       mx=max(mx,count);
       cout<<abs(n-mx)<<'\n';
      }
      
    return 0;
}