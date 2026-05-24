
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
        vector<int>v(n),v1(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        int mx=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(v[i]>v1[i]){
                sum+=v[i];
                mx=max(mx,v1[i]);
            }else{
                sum+=v1[i];
                mx=max(mx,v[i]);
            }
        }
        cout<<mx+sum<<'\n';
    }
    

    return 0;
}