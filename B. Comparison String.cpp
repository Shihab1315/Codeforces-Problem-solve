
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
       int c0=0;
       int mx=INT_MIN;
       for(int i=0;i<n;i++){
         if(s[i]=='<'){
            c0++;
         }else{
           mx=max(c0,mx);
           c0=0;
         }
       }
        mx=max(c0,mx);
         int c1=0;
       int mx1=INT_MIN;
       for(int i=0;i<n;i++){
         if(s[i]=='>'){
            c1++;
         }else{
           mx1=max(c1,mx1);
           c1=0;
         }
        }
          mx1=max(c1,mx1);
       int ans=max(mx,mx1)+1;
       cout<<ans<<'\n';
     }
     
    return 0;
}