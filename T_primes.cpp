#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

const int N = 1e6 + 5;

vector<bool> isPrime;

vector<bool> sieve(ll n) {

    vector<bool> primes(n + 1, true);

    primes[0] = false;
    primes[1] = false;

    for (ll i = 2; i * i <= n; i++) {

        if (primes[i]) {

            for (ll j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }

    return primes;
}

bool isTPrime(ll x) {

    ll root = sqrt(x);

    if (root * root != x) {
        return false;
    }

    return isPrime[root];
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    isPrime = sieve(N);

    int n;
    cin >> n;

    while (n--) {

        ll x;
        cin >> x;

        if (isTPrime(x))
           yes;
        else
           no;
    }

    return 0;
}