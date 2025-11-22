
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
      int n,m;
      cin>>n>>m;
      int count=0;
      for(int i=0;i<=sqrt(n);i++){
           int b=n-i*i;
           int x=i+b*b;
           if(x==m){
               count++;
           }
      }
      cout<<count<<'\n';
    return 0;
}