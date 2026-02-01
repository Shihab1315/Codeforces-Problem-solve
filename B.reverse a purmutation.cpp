
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
   ll n;
    cin >> n;
    vector<ll> p(n);

    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < n; i++) {
        ll mx = p[i], pos = i;

        for(int j = i+1; j < n; j++) {
            if(p[j] >= mx) {
                mx = p[j];
                pos = j;
            }
        }

        if(mx > p[i]) {
            reverse(p.begin() + i, p.begin() + pos + 1);
            break;
        }
    }

    for(int x : p) cout << x << " ";
    cout << "\n";
}
    return 0;
}