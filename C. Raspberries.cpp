
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;
const int INF = 1e9;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> dp(k, INF);
        dp[1 % k] = 0; 
        
        for (int i = 0; i < n; i++) {
            vector<int> new_dp(k, INF);
            
            for (int r = 0; r < k; r++) {
                if (dp[r] == INF) continue;
                
               
                for (int inc = 0; inc < k; inc++) {
                    int new_val = a[i] + inc;
                    int new_r = (r * (new_val % k)) % k;
                    new_dp[new_r] = min(new_dp[new_r], dp[r] + inc);
                }
            }
            
            dp = new_dp;
        }
        
        cout << dp[0] << endl;
    }
    return 0;
}