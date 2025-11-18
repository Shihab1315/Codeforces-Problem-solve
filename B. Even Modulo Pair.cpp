
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   ll t;
   cin>>t;
   while (t--)
   {
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     int a=0,b=0;
     sort(v.begin(),v.end());
     for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
             if(v[i]==v[j]){
                continue;
             }else if((v[j]%v[i])%2==0){
                  a=v[i];
                  b=v[j];
                  break;
             }
        }
     }
     if(a!=0 && b!=0){
         cout<<a<<" "<<b<<'\n';
     }else{
        cout<<-1<<'\n';
     }
   }
   
    return 0;
}