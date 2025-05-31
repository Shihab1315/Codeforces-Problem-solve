#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n < 2) {
            cout << "NO" << endl;
            continue;
        }

        bool isPrime = true;
        for (long long i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) cout << "NO" << endl;  
        else cout << "YES" << endl;        
    }

    return 0;
}
