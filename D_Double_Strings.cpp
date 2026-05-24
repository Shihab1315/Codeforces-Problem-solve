
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
        int n;
        cin >> n;

        vector<string> v(n);
        set<string> st;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }

        for (string s : v)
        {

            bool ok = false;

            for (int i = 1; i < s.size(); i++)
            {

                string left = s.substr(0, i);
                string right = s.substr(i);

                if (st.count(left) && st.count(right))
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << '\n';
    }

        return 0;
    }