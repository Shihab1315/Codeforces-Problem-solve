
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
     int i=0,j=s.size()-1;
     int count=0;
     while(i<j){
        if(s[i]!=s[j]){
            count++;
        }
        i++,j--;
     }
     if(count==1 || (count==0 && s.size()%2!=0)){
        yes;
     }else{
        no;
     }
    return 0;
}