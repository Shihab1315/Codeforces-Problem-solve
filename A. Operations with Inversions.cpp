
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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=v[0];
    int count=0;
    for(int i=1;i<n;i++){
           if(mx>v[i]){
            count++;
           }else{
               mx=v[i];
           }
    }
    cout<<count<<'\n';
  }
  
    return 0;
}