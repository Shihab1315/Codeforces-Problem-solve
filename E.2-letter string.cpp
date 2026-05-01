
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<string, long long> mp;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[0]) {
                    string temp = s;
                    temp[0] = c;
                    ans += mp[temp];
                }
            }
            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[1]) {
                    string temp = s;
                    temp[1] = c;
                    ans += mp[temp];
                }
            }

            mp[s]++;
        }

        cout << ans << '\n';
    return 0;
}