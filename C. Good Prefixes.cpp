
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
        sort(v.begin(),v.end());
        int ans=0;
        if(v[0]==0)ans++;
        ll sum=v[0];
        for(int i=0;i<n-1;i++){
              if(sum==v[i+1]){
                  ans++;
              }
              sum+=v[i+1];
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}