
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        vector<int> vex(x);
        for (int i = 0; i < x; i++) cin >> vex[i];
        
        sort(vex.begin(), vex.end(), greater<int>());
        
        bool ft = false;
        
        for (int i = 0; i <= x - 3; i++) {
            if (vex[i] % vex[i + 1] != vex[i + 2]) {
                ft = true;
                break;
            }
        }
        
        if (!ft) {
            cout << vex[0] << " " << vex[1] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}