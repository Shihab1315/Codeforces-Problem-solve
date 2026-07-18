
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
     string s,t;
     cin>>s;
     cin>>t;
     int i=0,j=0;
     string ans;
     while(i<s.size() && j<t.size()){
          if(s[i]==t[j]){
            ans+=s[i];
            i++,j++;
          }else if(s[i]=='?'){
            ans+=t[j];
            i++,j++;
          }else{
              ans+=s[i];
              i++;
          }
     }
     if(j==t.size() && s.size()!=ans.size()){
          int k=i;
          for(int i=k;i<s.size();i++){
               if(s[i]=='?'){
                   ans+='a';
               }else{
                ans+=s[i];
               }
          }
     }
     if(j==t.size()){
        yes;
        cout<<ans<<'\n';
     }else{
        no;
     }


   }
   
    return 0;
}