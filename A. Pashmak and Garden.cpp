#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, y1, x2, y2;
    if (!(cin >> x1 >> y1 >> x2 >> y2)) return 0;

    if (x1 == x2) {
        int d = abs(y1 - y2);
     
        cout << x1 + d << " " << y1 << " " << x2 + d << " " << y2 << "\n";
    }
    else if (y1 == y2) {
        int d = abs(x1 - x2);
      
        cout << x1 << " " << y1 + d << " " << x2 << " " << y2 + d << "\n";
    }
    else {
        int dx = abs(x1 - x2);
        int dy = abs(y1 - y2);
        if (dx != dy) {
            cout << -1 << "\n";
        } else {
           
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
        }
    }

    return 0;
}
