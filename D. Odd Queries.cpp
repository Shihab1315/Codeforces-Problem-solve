#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n), prefix(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];A. Operations with Inversions

        }

        prefix[0] = v[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + v[i];
        }

        while(k--){
            ll a, b, c;
            cin >> a >> b >> c;

            a--, b--; 

          
            ll ans = (a > 0 ? prefix[a-1] : 0);

           
            if(b+1 < n) ans += prefix[n-1] - prefix[b];

           
            ll x = b - a + 1;

            
            ans += c * x;

            if(ans % 2 == 1) yes;
            else no;
        }
    }
    return 0;
}
