#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> arr(n), ans(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ans[i] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '.') {
                if ((i + j) % 2 == 0)
                    ans[i][j] = 'B';
                else
                    ans[i][j] = 'W';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}
