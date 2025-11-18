
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            c++;
        }
        else if (s[i] != 'x')
        {
            if (c >= 3)
            {
                ans += c - 2;
               
            }
             c = 0;
        }
        if (i == n - 1 && c >= 3)
        {

            ans += c - 2;
        }
    }
    cout << ans << '\n';
    return 0;
}