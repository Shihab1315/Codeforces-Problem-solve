#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
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

        int non = 0, count = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != '0' && non == 0)
            {
                count++;
                non = 1;
            }
            else if (non == 1 && s[i] == '0')
            {
                count++;
            }
        }

        cout << s.size() - count << '\n';
    }

    return 0;
}