
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int n;
     cin>>n;
     vector<int>v(7);
     for(int i=0;i<7;i++){
       cin>>v[i];
     }
     ll ans=0;
     int index=0;
     for (int i = 0; ; i = (i + 1) % 7) {
              ans+=v[i];
              if(ans>=n){
                  index=i+1;
                  break;
              }
        }
        cout<<index<<'\n';
    return 0;
}