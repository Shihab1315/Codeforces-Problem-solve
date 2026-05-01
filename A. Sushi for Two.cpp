
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n;
    cin >> n;

    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];

    int p = 0, curr = 1;
    int ans = 0;

    for(int i = 1; i < n; i++) {
        if(t[i] == t[i-1]) {
            curr++;
        } else {
            ans = max(ans, 2 * min(p, curr));
            p = curr;
            curr = 1;
        }
    }

    ans = max(ans, 2 * min(p, curr));

    cout << ans << endl;
    return 0;
}