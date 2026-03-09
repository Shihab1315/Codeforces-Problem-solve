
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
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        
        if (x == 0 && y == 0) {
            cout << 0 << endl;
            continue;
        }
        
      
        if (x > y) swap(x, y);
        
       
        if (x * y < 0) {
            
            cout << (abs(x) + abs(y)) * a << endl;
        }
        else {
           
            long long m = min(abs(x), abs(y));
            long long M = max(abs(x), abs(y));
            
            long long cost1 = (abs(x) + abs(y)) * a; 
            long long cost2 = m * b + (M - m) * a;  
            
            cout << min(cost1, cost2) << endl;
        }
    }
    return 0;
}