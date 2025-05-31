
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        s.insert(d);
    }
    if (s.size() == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << *(++s.begin()) << endl;
    }

    return 0;
}