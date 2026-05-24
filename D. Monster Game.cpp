
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
      vector<int>v1(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
       for(int i=0;i<n;i++){
        cin>>v1[i];
      }
      vector<int>pre;
      pre.push_back(v1[0]);
      for(int i=1;i<n;i++){
           pre.push_back(v1[i-1]+v[i]);
      }
      sort(v.begin(),v.end());
      int mx=INT_MIN;
      for(int i=0;i<n;i++){
          bool ft=false;
          int j=0,com=0;
           while(ft!=true){
                if(n-i<pre[j]){
                    mx=max(mx,v[i]*com);
                    ft=true;
                }else{
                    com++;
                }
           }
      }
      cout<<mx<<'\n';
   }
   
    return 0;
}