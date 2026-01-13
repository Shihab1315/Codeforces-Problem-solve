
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int n;
     cin>>n;
    map<int,int>mp;
     while(n--){
        int a,b;
        cin>>a>>b;
        mp[a]=b;
     }
     bool ft=false;
     int count=0;
     int x=0;
     for(auto u:mp){
        if(count==0){
             x=u.second;
             count++;
        }
        if(x>u.second){
            ft=true;
            break;
        }else{
            x=u.second;
        }
        
     }
     if(ft){
        cout<<"Happy Alex"<<'\n';
     }else{
        cout<<"Poor Alex"<<'\n';
     }
    return 0;
}