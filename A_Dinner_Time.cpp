
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
     long long n, m, p, q;
        cin >> n >> m >> p >> q;

        if (n % p != 0 || m == (n / p) * q)
            cout << "YES\n";
        else
            cout << "NO\n";
   }
   
    return 0;
}