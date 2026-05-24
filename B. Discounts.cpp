#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        ll n, k;
        cin >> n >> k;
        
        vector<ll> a(n), b(k);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < k; i++) cin >> b[i];
        
        sort(a.rbegin(), a.rend()); 
        sort(b.begin(), b.end()); 
        
        ll total = 0;
        for(int i = 0; i < n; i++) total += a[i];
        
        ll pos = 0;
        for(int i = 0; i < k; i++){
            pos += b[i];
           
             if(pos<=n){
                 total -= a[pos - 1];
             }
            if(pos > n) pos = n;
            
            if(pos == n) break; 
        }
      
        
        cout << total << '\n';
    }
    
    return 0;
}