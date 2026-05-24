
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
        int l,r,L,R;
        cin>>l>>r;
        cin>>L>>R;
          if (r < L || R < l) {
            cout << 1 << "\n";
        }else{
            int start = max(l, L);
            int end = min(r, R);

             int ans = end - start;

            if (l < L || l>L) ans++;
            if (r > R || r<R) ans++;

            cout << ans << "\n";
          }


     }
     
    return 0;
}