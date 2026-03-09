#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if (v.front() == 0 && v.back() == 0)
        cout << "Bob" << '\n';
        else
        cout << "Alice" << '\n';
    }  

    return 0;
}
