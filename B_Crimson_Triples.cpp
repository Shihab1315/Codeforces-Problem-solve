
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
    while(t--){
        ll x;
        cin>>x;
        ll ans = 0;
        for(ll i = 1; i <= x; i++){
            ll q = x / i;
            ans += q * q;
        }
       cout<<ans<<'\n';
    }
    return 0;
}