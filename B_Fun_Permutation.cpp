
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
    cin>>n;
    vector<int>v(n),v1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        v1.push_back((n+1)-v[i]);
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<' ';
    }
    cout<<'\n';
  }
  
    return 0;
}