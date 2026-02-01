
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
        string s;
        cin >> s;

        if (s.size() == 1) {
            cout << s << '\n';
            continue;
        }

        if (s.front() != s.back()) {
            s.back() = s.front();
        }

        cout << s << '\n';
    }
    return 0;
}