
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     string s,t;
     cin>>s>>t;
     int i=0,j=0,count=0;
     while(j<t.size()){
          if(s[i]==t[j]){
            count++;
            i++,j++;
          }else{
              j++;
          }
          
     }
     cout<<count+1<<'\n';
    return 0;
}