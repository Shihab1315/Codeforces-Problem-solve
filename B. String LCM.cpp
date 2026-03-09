
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
       cin>>s>>t;
       int sl=s.size();
       int st=t.size();
       int g=gcd(sl,st);
       int l=(sl*st)/g;
       if(l%sl==0 && l%st==0){
         int x=l/sl;
         int y=l/st;
         string a,b;
         
         for(int i=0;i<x;i++){
           a+=s;
         }
         for(int i=0;i<y;i++){
           b+=t;
         }
         if(a==b){
           cout<<a<<'\n';
         }else{
           cout<<-1<<'\n';
         }
       }
       
    }
    
    return 0;
}