
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
       ll n,x;
       cin>>n>>x;
       int count=0;
       for(int i=2;i<=n;i++){
        if(i*n>=x){
          if(x%i==0){
              count++;
          }
       }
    }
       if(x<=n){
        count++;
       }
       cout<<count<<'\n';
    return 0;
}