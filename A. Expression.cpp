
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    vector<int> ans;
    cin >> a >> b >> c;
    int d, e, f, g,h;
    d = a + b * c;
    e = a * (b + c);
    f = a * b * c;
    g = (a + b) * c;
    h=a+b+c;
    ans.push_back(d);
    ans.push_back(e);
    ans.push_back(f);
    ans.push_back(g);
    ans.push_back(h);
    int mx = INT_MIN;
    for (auto u : ans)
    {
        mx = max(mx, u);
    }
    cout << mx << endl;

    return 0;
}