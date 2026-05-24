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

    vector<int>marisa(n);

    int c0=0,c1=0,c2=0;

    for(int i=0;i<n;i++){
        cin>>marisa[i];

        if(marisa[i]==0) c0++;
        else if(marisa[i]==1) c1++;
        else c2++;
    }

    int ans=0;

    ans+=c0;

    int mn=min(c1,c2);

    ans+=mn;

    c1-=mn;
    c2-=mn;

    ans+=c1/3;
    ans+=c2/3;

    cout<<ans<<'\n';
 }

 return 0;
}