
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b = 0, c = 0;
    cin >> a;
    while (a--)
    {
        int v;
        cin >> v;
        if (v < 0)
        {
            c += v;
        }
        else
        {
            b += v;
        }
    }
    cout << b - c << endl;

    return 0;
}