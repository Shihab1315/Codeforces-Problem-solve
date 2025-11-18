
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
        if((n*m)%2==0){
            cout<<(n*m)/2<<'\n';
        }else{
             cout<<(n*m)/2+1<<'\n';
        }
      }
      
    return 0;
}