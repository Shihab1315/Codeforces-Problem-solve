#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) cout << i << " ";
        cout << n << " ";
        for (int i = 1; i < n; ++i) cout << i << " ";
        for (int i = 1; i <= n; ++i) cout << i << " ";
        for (int i = 1; i <= n; ++i) cout << i << " \n"[i == n];
    }
    return 0;
}