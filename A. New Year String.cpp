
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
        string t;
        for(int i=0;i<4;i++){
             t+=s[i];
        }
        int c0=0,c1=0;
        if(t=="2026"){
              c1++;
        }else if(t=="2025"){
            c0++;
        }
        for(int i=4;i<n;i++){
            // delete(s.begin(),s.begin()+1);
             t.erase(0, 1);
             t+=s[i];
              if(t=="2026"){
              c1++;
           }else if(t=="2025"){
            c0++;
           }
        }
        if(c1==0 && c0!=0){
            cout<<1<<'\n';
        }else{
            cout<<0<<'\n';
        }
     }
     
    return 0;
}