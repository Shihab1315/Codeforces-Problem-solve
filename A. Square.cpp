
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x[4], y[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[i];
        }
        int mx = INT_MIN, mn = INT_MAX;
        for (int i = 0; i < 4; i++)
        {
            mx = max(mx, x[i]);
        }
        for (int i = 0; i < 4; i++)
        {
            mn = min(mn, x[i]);
        }
        int sub=mx-mn;
       
        cout << sub*sub << endl;
    }
    return 0;
}