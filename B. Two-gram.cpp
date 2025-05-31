
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
       int n;
       cin>>n;
       string s;
       while(n--){
          char ch;
          cin>>ch;
          s+=ch;
       }
       int mx=INT_MIN,d,g;
       string y;
       for(int i=0;i<s.size()-1;i++){
        int count=1;

         string f;
        for(int j=i+1;j<s.size()-1;j++){
            f+=s[i];
            f+=s[i+1];
            if(s[j]==f[0]  && s[j+1]==f[1]){
                count++;   
            }
        }
        if(mx<count){
           mx=count;
           d=i;
           g=i+1;
        }
       }
       cout<<s[d]<<s[g]<<'\n';
    return 0;
}