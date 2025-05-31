
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int n = s.size();
    int C1 = 0, c2 = 0;
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        c2++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            C1++;
        }
    }

    if (c2 > 0 && n - 1 == C1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << "\n";
    }
    else if (n == C1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << "\n";
    }
    else
    {
        cout << s << "\n";
    }

    return 0;
}