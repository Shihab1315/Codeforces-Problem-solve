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

       vector<int>v1,v;

       bool ft=false;
       int i=0;

       while(ft!=true){

          ll mul=pow(3,i);

          if(mul<=n){
            v1.push_back(mul);
            v.push_back(i);
          }else{
              ft=true;
          }

          i++;
       }

       int x=n;
       ll ans=0;
          int j=v1.size()-1;
         while(j>=0){

                if(x>=v1[j]){

                    ll b;

                    if(v[j]==0){
                        b=3;
                    }else{
                        b=pow(3,v[j]+1) +
                          v[j]*(pow(3,v[j]-1));
                    }

                    ans+=b;
                    x-=v1[j];
                }else{
                  j--;
                }

                if(x==0){
                  break;
                }
       }

      cout<<ans<<'\n';
      }

    return 0;
}