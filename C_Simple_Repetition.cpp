
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
    int n,m;
    cin>>n>>m;
    bool ft=true;
   
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
           ft=false;
           break;
        }
    }
    if(ft && n!=1){
        yes;
    }else{
        no;
    }
  }
  
 return 0;
}