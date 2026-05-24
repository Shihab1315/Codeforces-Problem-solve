#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int mx = 0;

        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < b.size(); j++) {

                int k = 0;

                while (i + k < a.size() && j + k < b.size() && a[i + k] == b[j + k]) {

                    k++;
                }

                mx = max(mx, k);
            }
        }

        cout << (a.size() + b.size() - 2 * mx) << '\n';
    }
}