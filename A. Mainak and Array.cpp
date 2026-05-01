
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;
int solve(){
  int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            return 0;
        }
         int ans = INT_MIN;

    int mn = *min_element(v.begin(), v.end() - 1);
    ans = max(ans, v[n-1] - mn);

    int mx = *max_element(v.begin() + 1, v.end());
    ans = max(ans, mx - v[0]);

    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, v[i] - v[i+1]);
    }
  return ans;
    }
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
      int t;
      cin>>t;
      while (t--)
      {
       cout<<solve()<<'\n';
      }
      
    return 0;
}