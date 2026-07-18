
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
        long long a, b;
        cin >> a >> b;

        if (b % a == 0) {
            cout << b * (b / a) << "\n";
        } else {
            long long g = __gcd(a, b);
            cout << (a / g) * b << "\n";
        }
    }
  
    return 0;
}