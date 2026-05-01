
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
      ll t;
      cin>>t;
      while (t--)
      {
        int n;
        cin >> n;

        vector<pair<int,int>> p(n), p1(n), p2(n);

        for(int i = 0; i < n; i++) {
            cin >> p[i].first;
            p[i].second = i;
        }
        for(int i = 0; i < n; i++) {
            cin >> p1[i].first;
            p1[i].second = i;
        }
        for(int i = 0; i < n; i++) {
            cin >> p2[i].first;
            p2[i].second = i;
        }

        // sort descending
        sort(p.begin(), p.end(), greater<pair<int,int>>());
        sort(p1.begin(), p1.end(), greater<pair<int,int>>());
        sort(p2.begin(), p2.end(), greater<pair<int,int>>());

        int ans = 0;

        int l = min(3, n);

        for(int i = 0; i < l; i++) {
            for(int j = 0; j < l; j++) {
                for(int k = 0; k < l; k++) {
                    int a = p[i].second;
                    int b = p1[j].second;
                    int c = p2[k].second;

                    if(a != b && b != c && a != c) {
                        int sum = p[i].first + p1[j].first + p2[k].first;
                        ans = max(ans, sum);
                    }
                }
            }
        }

        cout << ans << "\n";
        
      }
      
    return 0;
}