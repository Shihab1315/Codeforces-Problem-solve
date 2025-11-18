#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--)
    {
        vector<string> v(8);
        map<int, int> mp;

        for (int i = 0; i < 8; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (v[i][j] == '#') {
                    mp[i]++;
                }
            }
        }
 
        for (auto &u : mp) {
            if (u.second == 1) {
                if (mp[u.first - 1] == 2 && mp[u.first + 1] == 2) {
                    for (int j = 0; j < 8; j++) {
                if (v[u.first][j] == '#') {
                     cout << u.first + 1 << " " << j+1 << '\n'; 
                      break;
                }
               
            }
                   
                    break;
                }
            }
        }
    }

    return 0;
}
