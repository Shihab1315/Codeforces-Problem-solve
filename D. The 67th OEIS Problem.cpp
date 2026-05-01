#include <bits/stdc++.h>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long
using namespace std;

vector<ll> sieve(int l) {
    vector<bool> prime(l + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= l; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= l; j += i) {
                prime[j] = false;
            }
        }
    }

    vector<ll> ans;
    for (int i = 2; i <= l; i++) {
        if (prime[i]) ans.push_back(i);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ll> s = sieve(120000); 

    int y;
    cin >> y;

    while (y--) {
        int x;
        cin >> x;

        cout << s[0];

        for (int i = 1; i < x; i++) {
            cout << " " << s[i-1] * s[i];
        }

        cout << "\n";
    }

    return 0;
}