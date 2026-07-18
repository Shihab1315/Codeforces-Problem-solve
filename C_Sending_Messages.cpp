
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

    while (t--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> m(n);

        for (int i = 0; i < n; i++)
            cin >> m[i];

        ll prev = 0;

        for (int i = 0; i < n; i++)
        {
            ll gap = m[i] - prev;

            f -= min(gap * a, b);

            prev = m[i];
        }

        if (f > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}