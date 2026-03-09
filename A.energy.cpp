#include <bits/stdc++.h>
using namespace std;

long long solve(long long x) {
    if (x == 0) return 0;
    int k = 63 - __builtin_clzll(x); 
    return 2LL * k + 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        cout << solve(x) << "\n";
    }
    return 0;
}