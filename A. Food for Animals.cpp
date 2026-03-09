
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
     while(t--){
       ll a,b,c,x,y;
       cin>>a>>b>>c>>x>>y;
       ll z=0;

        if(x>a){
          z=x-a;
        }
       ll k=0;
       if(y>b){
          k=y-b;
       }
       if(z+k<=c){
          yes;
       }else{
        no;
       }

    }
    return 0;
}