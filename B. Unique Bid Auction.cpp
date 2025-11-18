
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        for (auto &u : v)
        {
            cin >> u;
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        int ans = -1;
        for (auto u : mp)
        {
            if (u.second == 1)
            {
                ans = u.first;
                break;
            }
        }
        if (ans == -1)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == ans)
                {
                    cout << i + 1 << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}