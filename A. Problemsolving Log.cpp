
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
     string s;
     cin>>s;
      map<char,int>mp;
     for(int i=0;i<n;i++){
            mp[s[i]]++;
     }
     int count=0;
     for(auto u:mp){
        int a=(int)u.first-(int)'A';
        if(a+1<=u.second){
              count++;
        }
       
      
     }
     cout<<count<<'\n';
  }
  
    return 0;
}