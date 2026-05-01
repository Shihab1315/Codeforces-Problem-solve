
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int y;
    cin>>y;
    while(y--){
          vector<ll>x(7);
          for(int i=0;i<7;i++){
            cin>>x[i];
          }
          sort(x.begin(),x.end());
          ll Sum=0;
          for(int i=0;i<x.size()-1;i++){
               int s=-x[i];
               Sum+=s;
          }
          if(Sum<0){
             cout<<Sum+x[6]<<'\n';
          }else{
            cout<<Sum+x[6]<<'\n';
          }
         
    }
    
    return 0;
}