
#include <bits/stdc++.h>

using namespace std;

int main()
{

   string s,h;
   cin>>s>>h;
   for(int i=0;i<s.size();i++){
    if(s[i]>='A' && s[i]<='Z'){
       s[i]=tolower(s[i]);
    }
    if(h[i]>='A' && h[i]<='Z'){
        h[i]=tolower(h[i]);
    }
   }

   if(s>h){
    cout<<1<<endl;
   }else if(h>s){
    cout<<-1<<endl;
   }else{
    cout<<0<<endl;
   }

    return 0;
}