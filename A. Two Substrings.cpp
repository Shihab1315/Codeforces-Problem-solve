
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    string t;
    if (s.size() < 4)
    {
        no;
        return 0;
    }
    int c = 0, c1 = 0, in = 0, in1 = 0, d1 = -1, d2 = -1, d3 = -1;
    for (int i = 0; i < s.size() - 2; i++)
    {
        t += s[i];
        t += s[i + 1];
        t += s[i + 2];
        if (t == "ABA" || t == "BAB")
        {
            d1 = i, d2 = i + 1, d3 = i + 2;
            break;
        }
        else
        {
            t.clear();
        }
    }
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            if (d1 != -1)
            {
                if (i == d1 || i == d2 || i == d3)
                {
                    continue;
                }
            }
            c++;
            in = i;
            in1 = i + 1;
            break;
        }
    }

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (d1 != -1)
        {
            if (i == d1 || i == d2 || i == d3)
            {
                continue;
            }
        }
        if (i == in || i == in1)
        {
            continue;
        }
        if (s[i] == 'B' && s[i + 1] == 'A')
        {
            c1++;
            break;
        }
    }

    if (c1 != 0 && c != 0)
    {
        yes;
    }
    else if ((d1 != -1 && c1 != 0) || (d1 != -1 && c != 0))
    {
        yes;
    }
    else
    {
        no;
    }
    return 0;
}