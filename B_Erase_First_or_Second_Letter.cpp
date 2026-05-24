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

        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> st;

        long long ans = 0;

        for (int i = 0; i < n; i++) {

            if (!st.count(s[i])) {
                ans += (n - i);
                st.insert(s[i]);
            }
        }

        cout << ans << '\n';
    }
}