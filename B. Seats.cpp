
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
       int c=1;
       int c0=0;
       for(int i=1;i<s.size();i++){
             if(s[i]=='0'){
                c0++;
             }
             if((c0==3) or ((c0==2) && (s[i]=='1'))){
                c++;
                c0=0;
             }
       }
       if(c0==2){
          c++;
       }
       int c10=1;
       int c1=0;
       for(int i=2;i<s.size();i++){
             if(s[i]=='0'){
                c1++;
             }
             if((c1==3) or ((c1==2) && (s[i]=='1'))){
                c10++;
                c1=0;
             }
       }
       if(c1==2){
          c10++;
       }
       int ans=min(c,c10);
       cout<<ans<<'\n';
   }
   
    return 0;
}