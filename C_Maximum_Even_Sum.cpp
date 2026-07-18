#include <bits/stdc++.h>
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
        ll a, b;
        cin >> a >> b;

        if (b % 2 == 1)
        {
            if (a % 2 == 1)
                cout << a * b + 1 << '\n';
            else
                cout << -1 << '\n';
        }
        else
        {
            if (a % 2 == 1 && b % 4 == 2)
                cout << -1 << '\n';
            else
                cout << a * (b / 2) + 2 << '\n';
        }
    }

    return 0;
}