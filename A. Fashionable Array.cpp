#include <bits/stdc++.h>
using namespace std;

int min_removals(vector<int> a) {
    int n = a.size();
    int min_ops = n;

    
    for (int i = 0; i <= n; i++) {           
        for (int j = 0; j <= n - i; j++) {   
            if (i + j >= n) continue;       

            vector<int> b(a.begin() + i, a.end() - j);
            int mn = *min_element(b.begin(), b.end());
            int mx = *max_element(b.begin(), b.end());

            if ((mn + mx) % 2 == 0)
                min_ops = min(min_ops, i + j);
        }
    }

    return min_ops;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end()); 

        cout << min_removals(a) << '\n';
    }

    return 0;
}
