
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
        long long n;
        cin >> n;

        long long a = 0, b = 0, c = 0;

     
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = i;
                n /= i;
                break;
            }
        }

       
        if (a == 0) {
            cout << "NO\n";
            continue;
        }

       
        for (long long i = a + 1; i * i <= n; i++) {
            if (n % i == 0) {
                b = i;
                c = n / i;
                break;
            }
        }

       
        if (a > 1 && b > 1 && c > 1 && a != b && b != c && c != a) {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        } else {
            cout << "NO\n";
        }
    }
     
    return 0;
}