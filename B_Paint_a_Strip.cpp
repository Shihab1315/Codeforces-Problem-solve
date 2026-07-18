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
        ll n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int ans = 1;
            ll obo = 1;

            while (obo < n)
            {
                ans++;
                obo = 2 * obo + 2;
            }

            cout << ans << endl;
        }
    }

    return 0;
}