
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int n,y,z;
     cin>>n>>y>>z;
     vector<int>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     int sum=0,ans=0;
     for(int i=0;i<n;i++){
          if(v[i]<=y){
             sum+=v[i];
          }
          if(sum>z){
            ans++;
            sum=0;
          }
     }
     cout<<ans<<'\n';
    return 0;
}