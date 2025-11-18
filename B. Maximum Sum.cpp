#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());

        vector<ll> pref(n+1, 0);
        for (int i = 0; i < n; ++i) pref[i+1] = pref[i] + a[i];

        ll best = 0;
     
        for (int x = 0; x <= k; ++x) {
            int removedMin = 2 * x;
            int removedMax = k - x;
            int l = removedMin;                
            int r = n - 1 - removedMax;    
            if (l > r) { 
                best = max(best, 0LL);
            } else {
                ll sumRem = pref[r+1] - pref[l];
                best = max(best, sumRem);
            }
        }

        cout << best << '\n';
    }
    return 0;
}
