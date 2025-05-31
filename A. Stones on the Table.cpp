
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    while (n--)
    {
        char ch;
        cin >> ch;
        s += ch;
    }
    int i = 0, j = 1, count = 0;
    while (i != s.size() - 1)
    {
        if (s[i] == s[j])
        {
            count++;
            i++, j++;
        }
        else
        {
            i++, j++;
        }
    }
    cout << count << endl;

    return 0;
}