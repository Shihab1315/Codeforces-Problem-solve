#include <bits/stdc++.h>

using namespace std;

bool isValid(int a[2][2]) {
    return (a[0][0] < a[0][1] &&
            a[1][0] < a[1][1] &&
            a[0][0] < a[1][0] &&
            a[0][1] < a[1][1]);
}

void rotate90(int a[2][2]) {
    int temp = a[0][0];
    a[0][0] = a[1][0];
    a[1][0] = a[1][1];
    a[1][1] = a[0][1];
    a[0][1] = temp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[2][2];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];

        bool ok = false;
        for (int i = 0; i < 4; i++) {
            if (isValid(a)) {
                ok = true;
                break;
            }
            rotate90(a);
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
