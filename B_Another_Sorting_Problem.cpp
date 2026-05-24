
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
      int mx=0;
      for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
           mx=max(mx,v[i]-v[i+1]);
        }
      }
      for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
              v[i+1]+=mx;
        }
      }
      bool ft=true;
      for(int i=0;i<n-1;i++){
           if(v[i]>v[i+1]){
            ft=false;
            break;
           }
      }
      if(ft){
        yes;
      }else{
        no;
      }
   }
   
    return 0;
}