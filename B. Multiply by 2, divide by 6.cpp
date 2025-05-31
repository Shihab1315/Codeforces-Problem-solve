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
        int count = 0;
        bool possible = true;

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                count++;
            } else if (n % 3 == 0) {
                n *= 2;
                count++;
            } else {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << count << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}
