
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
  int y;
    cin >> y;

    while (y--) {
        int x;
        cin >> x;

        vector<int> v(x);
        for (int i = 0; i < x; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());

        
        bool ft = false;
        for (int i = 0; i + 1 < x; i++) {
            if (v[i] == v[i + 1]) {
                ft = true;
                break;
            }
        }

        if (!ft) {
             for (int i = 0; i < x; i++) {
                cout << v[i];
                if (i < x - 1) cout << " ";
            }
            cout << "\n";
            
        } else {
           cout << -1 << "\n";
    }
}
    return 0;
}