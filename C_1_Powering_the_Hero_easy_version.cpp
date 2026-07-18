
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<int> pq;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                pq.push(v[i]);
            }
            else
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}