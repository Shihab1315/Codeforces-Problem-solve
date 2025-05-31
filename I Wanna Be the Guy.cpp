
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int l;
    cin >>l;
    set<int> s;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int b;
        cin >> b;
        s.insert(b);
    }

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int b;
        cin >> b;
        s.insert(b);
    }
    if (s.size()==l)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}