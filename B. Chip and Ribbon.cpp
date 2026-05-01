
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
        vector<ll>mui(n);
        for(int i=0;i<n;i++){
            cin>>mui[i];
        }
        ll ans=abs(1-mui[0]);
        for(int i=0;i<n-1;i++){
            if(mui[i]<mui[i+1]){
                ans+=mui[i+1]-mui[i];
            }
        }
        cout<<ans<<'\n';

     }
     
    return 0;
}