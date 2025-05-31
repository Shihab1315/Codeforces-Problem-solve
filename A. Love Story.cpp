
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int t;
     string h="codeforces";
     cin>>t;
     while (t--)
     {
       string s;
       cin>>s;
       int count=0;
       for(int i=0;i<h.size();i++){
        if(s[i]!=h[i]){
           count++;
        }
       }
       cout<<count<<endl;
     }
     
    return 0;
}