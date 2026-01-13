
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=INT_MIN,mn=INT_MAX;
    int mxindex=0,mnindex=0;
    for(int i=0;i<n;i++){
        if(v[i]<=mn){
            mn=v[i];
            mnindex=i+1;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]>=mx){
            mx=v[i];
            mxindex=i+1;
        }
    }
    int ans=0;
    if(mxindex>mnindex){
        ans=n-mnindex;
       ans+=mxindex;
        ans-=2;
    }else{
         ans=n-mnindex;
        ans+=(mxindex-1);
    }
    cout<<ans<<'\n';
    return 0;
}
