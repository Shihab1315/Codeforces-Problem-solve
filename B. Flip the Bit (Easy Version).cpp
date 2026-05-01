
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
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int p;
        cin >> p;
        p--; 

        int x = a[p];
        int ans = 0;
        
        for (int i = 0; i < p; ) {
            if (a[i] != x) {
                ans++;
                while (i < p && a[i] != x) i++;
            } else 
            {
                i++;
            }
        }
        for (int i = p + 1; i < n; ) {
            if (a[i] != x) {
                ans++;
                while (i < n && a[i] != x) i++;
            } else i++;
        }

        cout << ans << "\n";
    return 0;
}