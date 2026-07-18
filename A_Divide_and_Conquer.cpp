
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
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            yes;
        }else{
            no;
        }
      }
    return 0;
}