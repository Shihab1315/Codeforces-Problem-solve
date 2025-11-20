#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        long long even = 0, odd = 0;

      
        for (int i = 0; i < n; i++) {
            if (i & 1)
                odd = __gcd(odd, v[i]);
            else
                even = __gcd(even, v[i]);
        }

        bool ok_even = true;
        bool ok_odd = true;

        
        for (int i = 1; i < n; i += 2) {
            if (v[i] % even == 0) {
                ok_even = false;
                break;
            }
        }

       
        for (int i = 0; i < n; i += 2) {
            if (v[i] % odd == 0) {
                ok_odd = false;
                break;
            }
        }

        if (ok_even) {
            cout << even << "\n";
        } else if (ok_odd) {
            cout << odd << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
