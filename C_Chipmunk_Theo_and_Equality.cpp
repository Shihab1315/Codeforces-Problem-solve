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

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int,long long> cost;
        map<int,int> freq;

        for (int x : a) {

            map<int,int> vis;

            int cur = x;
            int step = 0;

            while (!vis.count(cur)) {

                vis[cur] = step;

                cost[cur] += step;
                freq[cur]++;

                if (cur & 1)
                    cur++;
                else
                    cur /= 2;

                step++;
            }
        }

        long long ans = 1e18;

        for (auto [v, c] : cost) {

            if (freq[v] == n) {
                ans = min(ans, c);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}