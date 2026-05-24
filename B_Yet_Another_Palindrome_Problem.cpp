
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
      bool ft=false;
      for(int i=0;i<n-2;i++){
           for(int j=i+2;j<n;j++){
               if(v[i]==v[j]){
                  ft=true;
                  break;
               }
           }    
      }
      if(ft)yes;
      else no;
   }
   
    return 0;
}