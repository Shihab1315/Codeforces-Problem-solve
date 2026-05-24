#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int da = abs(b - c);
        da = min(da, a - da);
    
        if (a >= 4) {
            cout << da + k << '\n';
        } else {
            cout << 1 << '\n';
        }
    }
    return 0;
}