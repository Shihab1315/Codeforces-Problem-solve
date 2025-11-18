
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
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        bool ft=true;
        if(mp.size()==1){
            no;
        }else if(mp.size()==2){
            for(auto &u:mp){
                if(u.second==1){
                    ft=false;
                   
                }
            }
            if(ft){
            yes;
        }else{
            no;
        }
        }else{
            yes;
        }
        
     }
     
    return 0;
}