#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    int mx = v[0], mn = v[0], count = 0;

    for (int i = 1; i < v.size(); i++) {
        if (v[i] > mx) {
            count++;
            mx = v[i];
        }
        else if (v[i] < mn) {
            count++;
            mn = v[i];
        }
    }

    cout << count << endl;

    return 0;
}
