
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;
bool isPerfect(long long x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s == 10;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    int cnt = 0;
    long long num = 1;

    while (true) {
        if (isPerfect(num)) {
            cnt++;
            if (cnt == k) {
                cout << num << "\n";
                break;
            }
        }
        num++;
    }
    return 0;
}