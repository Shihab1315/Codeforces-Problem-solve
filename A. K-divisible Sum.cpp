
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
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
        ll n, k;
        cin >> n >> k;
        int ans = 0;
        if (n == 1)
        {
            ans = k;
        }
        else if (n <= k)
        {
            ans = (k + n - 1) / n;
        }
        else if (n % k == 0 || k == 1 || n % k == 0)
        {
            ans = 1;
        }
        else
        {
            ans = 2;
        }

        cout << ans << '\n';
    }

    return 0;
}