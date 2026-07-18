
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
     int  a,b;
     cin>>a>>b;
     int mx=INT_MIN,ans=0;
     int start = max(a, b - 100);
     for(int i=b;i>=start;i--){
        string s=to_string(i);
        sort(s.begin(),s.end());
        int diff=s.back()-s.front();
        
        if(diff>mx){
           mx=max(mx,diff);
           ans=i;
        }
        if(mx==9){
            break;
        }
     }
     cout<<ans<<'\n';
   }
   
    return 0;
}