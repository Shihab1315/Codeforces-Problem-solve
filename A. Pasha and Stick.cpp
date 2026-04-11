
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   ll x;
   cin>>x;
   if(x%2!=0){
    cout<<0<<'\n';

   }else{
       cout<<(x/2-1)/2<<'\n';
   }

    return 0;
}