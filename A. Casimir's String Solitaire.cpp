
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
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
            }else if(s[i]=='B'){
                b++;
            }else{
                c++;
            }
        }
        if(a>b || b<c){
            no;
        }else{
           int x=b-a;
           if(x==c){
            yes;
           }else{
            no;
           }
        }
      }
      
    return 0;
}