
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
        vector<string> arr;
        int c = 0, d = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        bool st = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == '1')
                {
                    c = i;
                    d = j;
                    st = true;
                    break;
                }
            }
            if (st)
                break;
        }

        int count = 0;
        for (int i = d; i < n; i++)
        {
            if (arr[c][i] == '1')
                count++;
            else
                break;
        }
        bool ft = true;

        for (int i = c + 1; i < n; i++)
        {
            int cd = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == '1')
                {
                    cd++;
                }
            }

            if (cd != count && cd != 0)
            {
                ft = false;
                break;
            }
        }
        if (ft)
        {
            cout << "SQUARE" << '\n';
        }
        else
        {
            cout << "TRIANGLE" << '\n';
        }
    }

    return 0;
}