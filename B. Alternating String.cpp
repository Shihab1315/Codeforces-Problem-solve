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
    string s;
    cin>>s;

    string s1="", s2="";
    
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            s1+='a'; 
            s2+='b'; 
        }else{
            s1+='b';
            s2+='a';
        }
    }

    bool ft=false;

    if(s==s1 || s==s2){
        ft=true;
    }
    int count=0, a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s1[i]){
            count++;
        }else if(count>0){
            count=0;
            a++;
        }
        if(a>1){
            break;
        }
    }
    if(count>0) a++; 

    if(a<=1) ft=true;

    int c1=0, b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s2[i]){
            c1++;
        }else if(c1>0){
            c1=0;
            b++;
        }
        if(b>1){
            break;
        }
    }
    if(c1>0) b++; 

    if(b<=1) ft=true;

    if(ft) yes;
    else no;
}
return 0;
}