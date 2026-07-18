#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
using namespace std;

ll lcmll(ll a,ll b)
{
    return (a/__gcd(a,b))*b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll a,b,c,m;
        cin >> a >> b >> c >> m;

        ll ab = lcmll(a,b);
        ll ac = lcmll(a,c);
        ll bc = lcmll(b,c);
        ll abc = lcmll(ab,c);

        ll A = m/a;
        ll B = m/b;
        ll C = m/c;

        ll AB = m/ab;
        ll AC = m/ac;
        ll BC = m/bc;

        ll ABC = m/abc;

        ll alice =
            (A-AB-AC+ABC)*6 +
            (AB-ABC)*3 +
            (AC-ABC)*3 +
            ABC*2;

        ll bob =
            (B-AB-BC+ABC)*6 +
            (AB-ABC)*3 +
            (BC-ABC)*3 +
            ABC*2;

        ll carol =
            (C-AC-BC+ABC)*6 +
            (AC-ABC)*3 +
            (BC-ABC)*3 +
            ABC*2;

        cout << alice << " " << bob << " " << carol << '\n';
    }

    return 0;
}