
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
      int a=0,b=0;
      for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            a++;
        }else if(v[i]==67){
            b++;
        }
      }
      if(b>0){
        yes;
      }else{
        no;
      }
   }
   
    return 0;
}