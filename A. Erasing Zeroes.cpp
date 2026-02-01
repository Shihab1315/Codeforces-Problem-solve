
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
        int c1=0;
        for(int i=0;i<s.size();i++){
              if(s[i]=='1'){
                     c1++;
              }
        }
        int j=0;
        int ans=0;

        for(int i=0;i<s.size();i++){
              if(s[i]=='1'){
                j++;
                c1--;
              }else if((j>0 && c1>0)&& s[i]=='0'){
                    ans++;  
              }

        }
        cout<<ans<<'\n';
    }
    
    return 0;
}