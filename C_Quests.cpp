
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
        int n,m;
        cin>>n>>m;
    vector<int>v(n),v1(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int mx=0,ans=0;
    ll sum=0;
    int mn=min(m,n);
    for(int i=0;i<mn;i++){
        sum+=v[i];
        mx=max(mx,v1[i]);
        ll x=(m-i-1)*mx;
        if(ans<x+sum){
            ans=x+sum;
        }
    }
    cout<<ans<<endl;
    }
    
    return 0;
}