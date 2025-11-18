
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int n;
   cin>>n;
  vector<int>v(n);
  map<int,int>mp;
  for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
  }
  vector<int>v1;
  for(int i=n-1;i>=0;i--){
       if((mp[v[i]])!=0){
        v1.push_back(v[i]);
       }
       mp[v[i]]=0;
  }
  reverse(v1.begin(),v1.end());
  cout<<v1.size()<<'\n';
  for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
  }

   
    return 0;
}