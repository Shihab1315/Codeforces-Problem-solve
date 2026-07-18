
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

        if (n < 22)
        {
            bool ft = false;

            for (ll i = 0; i <= n; i++)
            {
                string st = to_string(i);
                string r = st;
                reverse(r.begin(), r.end());

                if (st == r)
                {
                    if((n - i) % 12 == 0){
                    cout << i << ' ' << n - i << '\n';
                    ft = true;
                    break;
                    }
                }
            }

            if (!ft) cout << -1 << '\n';
            continue;
        }

        ll z = n % 12;

        if (z <= 9) cout << z << ' ' << n - z << '\n';
        else if (z == 10) cout << 22 << ' ' << n - 22 << '\n';
        else cout << 11 << ' ' << n - 11 << '\n';
    }
    return 0;
}