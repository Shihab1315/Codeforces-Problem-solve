
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n,l;
        cin>>n>>l;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
       vector<pair<int,int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), cmp);
        int z=l;
        int ans=0;
   for(auto &u:v){
    if(u.second <= z){
        z -= u.second;  
    }else{
        ans++;
    }
}
cout<<ans<<'\n';
     
    }
    
    return 0;
}
