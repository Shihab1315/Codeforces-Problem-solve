
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;A. One and Two

    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = a + b + c;
        int x;
        if (n % sum == 0)
        {
            x = (n / sum) - 1;
        }
        else
        {
            x = (n / sum);
        }
        ll z = 3 * x;
        ll u = sum * x;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        ll ans = 0, i = 0;

        while (i < 3)
        {

            u += v[i];
            if (u == n || u > n)
            {
                z++;
                ans = z;
                break;
            }

            i++;
            z++;
        }

        cout << ans << '\n';
    }

    return 0;
}