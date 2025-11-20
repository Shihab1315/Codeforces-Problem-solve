
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
        string s;
        cin>>s;
       bool ft=false;
        for(int i=0;i<5;i++){
            string t;
            cin>>t;
            if(s[0]==t[0] || s[1]==t[1]){
                ft=true;
                break;
            }
        }
        if(ft==true){
            yes;
        }else{
            no;
        }

    return 0;
}