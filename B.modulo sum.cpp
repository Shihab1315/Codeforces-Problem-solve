
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
  int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n >= m) {
        cout << "YES\n";
        return 0;
    }

    vector<bool> possible(m, false);
    for(int i = 0; i < n; i++) {
        vector<bool> new_possible = possible;
        int r = a[i] % m;
        new_possible[r] = true;
        for(int j = 0; j < m; j++) {
            if(possible[j]) new_possible[(j + r) % m] = true;
        }
        possible = new_possible;
    }

    if(possible[0]) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}