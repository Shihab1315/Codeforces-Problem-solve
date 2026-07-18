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
      ll n, x, y, z;
      cin >> n >> x >> y >> z;

      ll a1 = (n + x + y - 1) / (x + y);

      ll a2;
       ll rem;
        ll s;
      if (z * x >= n) {
         a2 = (n + x - 1) / x;
      } else {
          rem = n - z * x;
         s = x + 10 * y;
         a2 = z + (rem + s - 1) / s;
      }

      cout << min(a1, a2) << "\n";
   }

   return 0;
}