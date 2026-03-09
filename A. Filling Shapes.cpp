
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   ll n;
   cin>>n;
   if(n%2!=0){
    cout<<0<<'\n';
   }else{
      ll result=1;
      for(int i=1;i<=n/2;i++){
        result*=2;
      }
      cout<<result<<'\n';
   }
    return 0;
}   