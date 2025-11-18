
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
    int a,b,c;
    cin>>a>>b>>c;
   int d=max(0,max(b,c)+1-a);
   int e=max(0,max(a,c)+1-b);
   int f=max(0,max(a,b)+1-c);
      cout<<d<<" "<<e<<" "<<f<<'\n';
   }
   
    return 0;
}
