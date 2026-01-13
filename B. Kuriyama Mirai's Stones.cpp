
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    
    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + v[i];

   
    vector<ll> v1 = v;
    sort(v1.begin(), v1.end());

   
    vector<ll> pref1(n + 1, 0);
    for (int i = 0; i < n; i++)
        pref1[i + 1] = pref1[i] + v1[i];

    ll m;
    cin>>m;
    while(m--){
        ll a,b,c;
        cin>>a>>b>>c;
       if (a == 1) {
            cout << pref[c] - pref[b - 1] << '\n';
        } else {
            cout << pref1[c] - pref1[b - 1] << '\n';
        }
    }
    return 0;
}