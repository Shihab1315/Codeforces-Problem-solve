
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
        int a, b;
        cin >> a >> b;
        int m = max(a, b);
        int x = a, y = b;
        int j = 2;
        int count = 1, count1 = 1;
        x -= 1;
        for (int i = 2; i <= m; i *= 2)
        {
            if (j % 2 == 1)
            {
                x -= i;
            }
            else
            {
                y -= i;
            }
            if (x >= 0 && y >= 0)
            {
                count++;
            }
            else
            {
                break;
            }
            j++;
        }
        x = a, y = b;
        int k = 2;
        y -= 1;
        for (int i = 2; i <= m; i *= 2)
        {
            if (k % 2 == 1)
            {
                y -= i;
            }
            else
            {
                x -= i;
            }
            if (x >= 0 && y >= 0)
            {
                count1++;
            }
            else
            {
                break;
            }

            k++;
        }
        cout << max(count1, count) << '\n';
    }

    return 0;
}