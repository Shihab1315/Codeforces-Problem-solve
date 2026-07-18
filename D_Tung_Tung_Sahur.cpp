
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
        string s, r;
        cin >> s >> r;
        int count = 0;
        char ch;
        bool ft = true;
        if (s[0] == r[0])
        {
            ch = s[0];
            count = 1;
            if (s.size() == 1 && r.size() > 1)
            {
                if (r.size() > 2 || ch != r[1])
                {
                    ft = false;
                }
            }
        }
        else
        {
            ft = false;
        }
        if (ft)
        {
            int i = 1, j = 1;
            while (i < s.size())
            {
                if (s[i] == r[j])
                {
                    if (s[i] == ch)
                    {
                        count++;
                        i++, j++;
                    }
                    else
                    {

                        count = 1;
                        ch = s[i];
                        i++, j++;
                    }
                }
                else
                {
                    if (ch == s[i] || count == 0 || j >= (int)r.size())
                    {
                        ft = false;
                        break;
                    }
                    count--;
                    j++;
                }
            }
                while (j < r.size())
                {
                    if (ch != r[j] || count == 0)
                    {
                        ft = false;
                        break;
                    }
                    else
                    {
                        count--;
                    }
                    j++;
                }
            }
            
            if (ft)
            {
                yes;
            }
            else
            {
                no;
            }
        
        }
        return 0;
    }