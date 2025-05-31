
#include <bits/stdc++.h>

using namespace std;

int main()
{

   string s,h;
   cin>>s>>h;
   int m=0;
   reverse(s.begin(),s.end());
   for(int i=0;i<s.size();i++){
    if(s[i]==h[i]){
         m++;
    }
   }
   int mxs=s.size(),mxh=h.size();
      int x=max(mxs,mxh);
   if(m==x){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

    return 0;
}