#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Track the minimum cost
    int min_cost = INT_MAX;

    // Iterate over possible starting points of subarrays
    for (int start = 0; start < k; start++) {
        vector<int> b;

        // Collect elements at even indices in the partition
        for (int i = start; i < n; i += k) {
            b.push_back(a[i]);
        }

        b.push_back(0); // Append 0 at the end

        // Find the minimum cost index where b[i] != i + 1
        int cost = 1;
        for (int i = 0; i < b.size(); i++) {
            if (b[i] != i + 1) {
                cost = i + 1;
                break;
            }
        }

        // Store the minimum cost found
        min_cost = min(min_cost, cost);
    }

    cout << min_cost << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
