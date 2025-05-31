
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    string s;
    cin >> s;
    vector<int> ans;

    int i = 0;
    while (i < s.size()) {
        if (s[i] == '.') {
            ans.push_back(0);
            i++;
        } else if (s[i] == '-' && i + 1 < s.size()) {
            if (s[i + 1] == '.') {
                ans.push_back(1);
            } else if (s[i + 1] == '-') {
                ans.push_back(2);
            }
            i += 2;
        }
    }

    for (int num : ans) {
        cout << num;
    }

    return 0;
}