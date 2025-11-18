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
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 0; i < n; i++) {
            int a;
            string s;
            cin >> a >> s;
            for (char c : s) {
                if (c == 'U')
                    v[i] = (v[i] + 9) % 10; 
                else
                    v[i] = (v[i] + 1) % 10; 
            }
        }

        for (int x : v) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}
