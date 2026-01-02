
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
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=1;i<=n;i++){
            if(v[i]!=i){
               ans=i;
                break;
            }
        }
        cout<<ans<<'\n';
    return 0;
}