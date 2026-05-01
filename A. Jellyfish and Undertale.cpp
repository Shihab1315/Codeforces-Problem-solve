
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
      cin>>t;
      while (t--)
      {
          long long n, a, b;
        cin >> n >> a >> b;

        vector<long long> x(n);
        for (int i = 0; i < n; i++) cin >> x[i];

        long long ans = b;
F. Eating Candies

        for (int i = 0; i < n; i++) {
            ans += min(x[i], a - 1);
        }

        cout << ans << "\n";

      }
      
    return 0;
}