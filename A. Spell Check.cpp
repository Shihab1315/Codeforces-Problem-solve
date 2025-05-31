
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
       int t;
       cin>>t;
       while(t--){
          int n;
          cin>>n;
          if(n<5 || n>5){
            cout<<"NO"<<endl;
          }else{
            string s;
            cin>>s;
            int c1=0,c2=0,c3=0,c4=0,c5=0;
           for(int i=0;i<s.size();i++){
            if(s[i]=='T'){
               c1++;
            }else if(s[i]=='i'){
                c2++;
            }else if(s[i]=='m'){
                c3++;
            }else if(s[i]=='u'){
                c4++;
            }else if(s[i]=='r'){
                c5++;
            }
           }
           if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1){
                  cout<<"YES"<<endl;
           }else{
            cout<<"NO"<<endl;
           }
          }
       }
    return 0;
}