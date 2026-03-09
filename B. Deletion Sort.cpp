
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
          vector<int>v1=v;
          sort(v1.begin(),v1.end());
          int ans=0;
          for(int i=0;i<n;i++){
              if(v1[i]==v[i]){
                  ans++;
              }
          }
          if(ans==n){
            cout<<ans<<'\n';
          }else{
               cout<<1<<'\n';
          }
         
       }
       
    return 0;
}