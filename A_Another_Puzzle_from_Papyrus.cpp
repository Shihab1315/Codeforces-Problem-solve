#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll c;
        cin >> n >> c;

        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll ans1 = 0;
        bool ft = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                ft = false;
                break;
            }
            ans1 += (a[i] - b[i]);
        }

    
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll ans2 = c;
        bool ft1 = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                ft1 = false;
                break;
            }
            ans2 += (a[i] - b[i]);
        }

        if (!ft && !ft1)
            cout << -1 << '\n';
        else if (ft && ft1)
            cout << min(ans1, ans2) << '\n';
        else if (ft)
            cout << ans1 << '\n';
        else
            cout << ans2 << '\n';
    }

    return 0;
}