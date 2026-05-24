
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
          vector<int>v;
          if(n==2 || n==3 || n==4){
             cout<<-1<<'\n';
          }else{
               for(int i=2;i<=n;i+=2){
                     if(i!=4){
                        v.push_back(i);
                     }
               }
               v.push_back(4);
               v.push_back(5);
                for(int i=1;i<=n;i+=2){
                     if(i!=5){
                        v.push_back(i);
                     }
               }
          }
          for(int i=0;i<v.size();i++){
            cout<<v[i]<<' ';
          }
      }
      
    return 0;
}