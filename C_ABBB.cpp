
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
        string s;
        cin >> s;
        string x = s;

        while (true)
        {
            string ans;
            int j = 0, count = 0;
            while (j < x.size())
            {
                if (j + 1 < x.size() &&
                    ((x[j] == 'A' && x[j + 1] == 'B') ||
                     (x[j] == 'B' && x[j + 1] == 'B')))
                {
                    j += 2;
                    count++;
                }
                else
                {
                    ans += x[j];
                    j++;
                }
            }
            if (count == 0)
            {
                break;
            }
            x = ans;
            
        }
        cout << x.size() << '\n';
    }
    return 0;
}