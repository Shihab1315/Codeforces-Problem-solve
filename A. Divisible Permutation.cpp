#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> p;
        vector<bool> used(n + 1, false);

        // start with 1
        p.push_back(1);
        used[1] = true;

        for(int i = 1; i <= n - 1; i++) {
            for(int x = 1; x <= n; x++) {
                if(!used[x] && abs(p.back() - x) % i == 0) {
                    p.push_back(x);
                    used[x] = true;
                    break;
                }
            }
        }

        for(int x : p) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
