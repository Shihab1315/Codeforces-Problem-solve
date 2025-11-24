
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
        vector<int> v(n), v1(n);
        int mx = INT_MIN, mx1 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
             mx = max(mx, v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
             mx1 = max(mx1, v1[i]);
        }
      
        int z = 0;
        if (mx > mx1)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] < v1[i])
                {
                    if (z < v[i])
                    {
                        z = v[i];
                    }
                }
                else
                {
                    if (z < v1[i])
                    {
                        z = v1[i];
                    }
                }
            }
            cout << mx * z << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] > v1[i])
                {
                    if (z < v1[i])
                    {
                        z = v1[i];
                    }
                }
                else
                {
                    if (z < v[i])
                    {
                        z = v[i];
                    }
                }
            }
            cout << mx1 * z << '\n';
        }
    }

    return 0;
}