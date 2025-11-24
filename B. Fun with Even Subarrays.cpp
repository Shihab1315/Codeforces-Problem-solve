
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
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int last = a[n-1];
    int cnt = 0;

    // Count how many elements from right equal to last
    for(int i = n-1; i >= 0; i--) {
        if(a[i] == last) cnt++;
        else break;
    }

    if(cnt == n) {
        cout << 0 << "\n";
        return 0;
    }

    int ops = 0;
    while(cnt < n) {
        ops++;
        cnt *= 2;
    }

    cout << ops << "\n";
  }
  
    return 0;
}