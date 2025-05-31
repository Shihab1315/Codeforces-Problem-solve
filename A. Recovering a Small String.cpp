
#include <bits/stdc++.h>

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
        bool ft = false;
        for (char c = 'a'; c <= 'z'; c++)
        {
            for (char d = 'a'; d <= 'z'; d++)
            {
                for (char e = 'a'; e <= 'z'; e++)
                {
                    int s1 = c - 'a' + 1;
                    int s2 = d - 'a' + 1;
                    int s3 = e - 'a' + 1;
                    if (s1 + s2 + s3 == n)
                    {
                        cout << c << d << e << '\n';
                        ft = true;
                        break;
                    }
                }
                if (ft == true)
                    break;
            }
            if (ft == true)
                break;
        }
    }
    return 0;
}