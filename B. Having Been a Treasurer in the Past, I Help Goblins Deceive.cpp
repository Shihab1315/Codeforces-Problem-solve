
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
       string s;
       cin>>s;
       ll cA=0,cB=0;
       for(int i=0;i<n;i++){
        if(s[i]=='-'){
            cA++;
        }else{
            cB++;
        }
       }
       ll ans=cB*(cA/2)*(cA-cA/2);
       cout<<ans<<'\n';
    }
    

    return 0;
}