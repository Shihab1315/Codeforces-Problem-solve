#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];

        bool found = false;

        for (int j = 2; j < n; j++)
        {
            if (p[j - 1] < p[j] && p[j] > p[j + 1])
            {
                cout << "YES\n";
                cout << j - 1 << " " << j << " " << j + 1 << "\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "NO\n";
    }
    return 0;
}
