
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
      if(s[0]=='4'){
        no;
        return 0;
      }
      bool ft=true;
      int c=0;

      for(int i=0;i<s.size();i++){
              if(s[i]=='4'){
             c++;
          }else{
              c=0;
          }
          if(c==3){
            ft=false;
            break;
          }
      }
     for(int i=0;i<s.size();i++){
          if(s[i]!='1' && s[i]!='4'){
            ft=false;
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