
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min = 0;
    if (b < c && b < d)
    {
        min = b;
    }
    else if (c < d && c < b)
    {
        min = c;
    }
    else
    {
        min = d;
    }
    if (b + c == a || b + d == a || c + d == a)
    {
        cout << 2 << endl;
        return 0;
    }
    else if (b + c + d == a)
    {
        cout << 3 << endl;
        return 0;
    }
    if (min == 1)
    {
        cout << a << '\n';
    }
    else
    {
        cout << (a / min) << endl;
    }

    return 0;
}