
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    ll add[10];
    add[0] = 1;
    for (int i = 1; i < 10; i++) {
        add[i] = add[i-1] * 10LL;
    }
    int t;
    cin>>t;
    while (t--)
    {
        ll x;
        cin>>x;
          int a = 0;
        ll tmp = x;
        while (tmp > 0) {
            a++;
            tmp /= 10;
        }

        ll y = add[a] + 1;
        cout << y << '\n';
    }
    
    return 0;
}