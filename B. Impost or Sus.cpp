
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
        string s;
        cin>>s;
        int x=s.size();

      int ans=0;
      int count=0;
      if(s[0]=='u'){
            ans++;
      }
      if(s[x-1]=='u'){
          ans++;
      }
      for(int i=1;i<x-1;i++){
             if(s[i]=='u'){
                 count++;
             }else{
                 count=0;
             }
             
             if(count==2){
                 ans++;
                 count=0;
             }
      }
      cout<<ans<<'\n';
    }
    
    return 0;
}