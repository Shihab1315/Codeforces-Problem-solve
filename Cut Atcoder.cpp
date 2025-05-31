#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> v(k);
    vector<int> ans;

    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }

    if (n > k || n < 1) { 
        cout << "Invalid input" << endl; 
        return 0; 
    }

    for (int i = k - n; i<k; i++) {
        ans.push_back(v[i]);
    }

    
    for (int i = 0; i < k-n; i++) {
        ans.push_back(v[i]);
    }

    for (int i = 0; i < k; i++) {
        cout << ans[i] << " "; 
    }
    cout << endl; 

    return 0;
}
