
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     string s="314159265358979323846264338327";
     int t;
     cin>>t;
     while (t--)
     {
      string a;
      cin>>a;
      int count=0;
      for(int i=0;i<a.size();i++){
          if(a[i]==s[i]){
             count++;
          }else{
            break;
          }
      }
      cout<<count<<'\n';
     }
     

    
    return 0;
}