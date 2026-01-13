
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int n,m,a;
   cin>>n>>m>>a;
   int x,y;
   if(n%a!=0){
       x=n/a;
       x++;
   }else{
      x=n/a;
   }
   if(m%a!=0){
       y=m/a;
       y++;
   }else{
      y=m/a;
   }
   int ans=x*y;
   cout<<ans<<'\n';

    return 0;
}