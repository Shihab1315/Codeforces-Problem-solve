
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
    
    long long small_primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    
    while(t--){
        long long n;
        cin >> n;
        
        long long nm1 = n - 1;
        for(long long p : small_primes){
            if(nm1 % p != 0){
                long long b = nm1 - p;
                if(b > 1 && b != p){
                    cout << p << " " << b << " " << 1 << "\n";
                    break;
                }
            }
        }
    }
   
    return 0;
}