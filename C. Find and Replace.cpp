
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ft=true;
    for(int i=0;i<=n-2;i++){
        int x=i+1;
        for(int j=i;j<n;j++){
            if(s[i]==s[j]){
                 if((x%2==0) && ((j+1)%2!=0)){
                      ft=false;
                      break;
                 }else if(((x%2)!=0) && ((j+1)%2==0)){
                     ft=false;
                      break;
                 }
            }
        }
    }
    if(ft){
        yes;
    }else{
        no;
    }
    
}


    return 0;
}