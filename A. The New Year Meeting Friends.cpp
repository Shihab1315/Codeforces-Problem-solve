
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    sort(ans.begin(), ans.end());
    int total = 0;
    total += abs(ans[0] - ans[1]);
    total += abs(ans[1] - ans[2]);
    cout << total << "\n";

    return 0;
}