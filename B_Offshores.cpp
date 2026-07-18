
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
      int n,x,y;
      cin>>n>>x>>y;
      vector<int>v(n);
        ll total = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += (v[i] / x) * y;
        }

        ll mx = 0;

        for (int i = 0; i < n; i++)
        {
            ll curr = v[i] + total - (v[i] / x) * y;
            mx= max(mx, curr);
        }

        cout << mx << '\n';
   }
   
    return 0;
}