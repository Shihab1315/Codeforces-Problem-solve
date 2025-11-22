
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
          vector<int>v(n);
          for(int i=0;i<n;i++){
            cin>>v[i];
          }
          int mn=INT_MAX,mx=INT_MIN;
          int in=0,in1=0;
          for(int i=0;i<n;i++){
             if(mn>v[i]){
                  in=i;
                  mn=v[i];
             }
             if(mx<v[i]){
                in1=i;
                mx=v[i];
             }
          }
          int a=max(in,in1)+1;
          int b=n-min(in,in1);
          int c=(min(in,in1)+1)+(n-max(in,in1));
        

          int ans=min(a,min(b,c));
          cout<<ans<<'\n';

      }
      
    return 0;
}