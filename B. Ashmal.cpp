
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
           vector<string>s;
           for(int i=0;i<n;i++){
            string x;
            cin>>x;
            s.push_back(x);
           }
          
           
           string d;
           d+=s[0];
           string f;
           f+=s[0];
            string ans;
           if(s.size()==1){
               ans+=s[0];
           }
           for(int i=1;i<n;i++){
               f.clear();
               f+=s[i];
               f+=d;
               d+=s[i];
               if(f>d){
                ans.clear();
                ans+=d;
               }else{
                ans.clear();
                ans+=f;
                d.clear();
                d+=f;
               }
            
           }
         
           
           cout<<ans<<"\n";
       }
       
    return 0;
}