
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        int ans;
        cin >> n >> k;
        if(n%2!=0){
            int x=n-k;
            k--;
            if(x%k!=0){
                ans=x/k;
                ans+=2;
            }else{
                ans=x/k;
                ans+=1;
            }
        }else{
            k--;
            if(n%k!=0){
                ans=n/k;
                ans+=1;
            }else{
                ans=n/k;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}