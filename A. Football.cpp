
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int c1 = 0, c0 = 0;
    for (auto u : s)
    {
        if (u == '0')
        {
            c0++;
            if (c0 == 7)
            {
                cout << "YES" << endl;
                break;
            }
        }
        else
        {
            c0 = 0;
        }
    }
    for (auto u : s)
    {
        if (u == '1')
        {
            c1++;
            if (c1 == 7)
            {
                cout << "YES" << endl;
                break;
            }
        }
        else
        {
            c1 = 0;
        }
    }
    if (c1 != 7 && c0 != 7)
        cout << "NO" << endl;
    return 0;
}