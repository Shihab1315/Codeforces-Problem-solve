
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
      int l,a,b;
      cin>>l>>a>>b;
      int mx=0;
      for(int i=0;i<=l-1;i++){
           int x=(a+i*b)%l;
           if(x<l){
             mx=max(mx,x);
           }
           if(mx==l-1){
             break;
           }
      }
      cout<<mx<<'\n';
   
      
    }
    return 0;
}