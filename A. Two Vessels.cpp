
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
           int a,b,c,count=0;
           cin>>a>>b>>c;
            int mx=max(a,b);
           int mn=min(a,b);
           bool ft=true;
           if(a==b){
            cout<<0<<'\n';
            ft=false;
           }else if(mx<=c){
              cout<<1<<'\n';
              ft=false;
           }
           else{
              while(mn<mx){
                  mn+=c;
                  mx-=c;
                  count++;
              }
            
           }
             if(ft==true)
             cout<<count<<'\n';
      }
      
    return 0;
}