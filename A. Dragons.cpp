#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x; int n;                   
    if (!(cin >> x >> n)) return 0;

    vector<pair<long long,long long>> d(n);
    for (auto &p : d) cin >> p.first >> p.second;

    sort(d.begin(), d.end());             

    for (auto u : d) {
        if (x <= u.first) { cout << "NO\n"; return 0; }
        x += u.second;
    }
    cout << "YES\n";
    return 0;
}
