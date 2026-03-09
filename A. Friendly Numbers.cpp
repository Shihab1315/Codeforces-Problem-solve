#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int digitSum(ll n) {
    ll sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ll t;
    cin>>t;
    while(t--){
    ll x;
    cin >> x;

    int count = 0;
    for(ll y = x + 1; y <= x + 100; y++) {
        if(y - digitSum(y) == x) {
            count++;
        }
    }

    cout << count <<'\n';
    }
    return 0;
}
