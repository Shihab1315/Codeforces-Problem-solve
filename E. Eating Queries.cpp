
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
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        vector<ll> pre;
        pre.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            pre.push_back(pre[i - 1] + v[i]);
        }
        while (m--)
        {
            ll x;
            cin >> x;
            int i = 0, j = pre.size() - 1;
            while (i <= j)
            {
                ll mid = i + (j - i) / 2;
                if (pre[mid] >= x)
                {
                    j = mid - 1;
                }
                else
                {
                    i = mid + 1;
                }
            }
            if (i != n)
            {
                cout << i + 1 << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}